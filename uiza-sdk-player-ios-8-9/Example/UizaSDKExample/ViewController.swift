//
//  ViewController.swift
//  UizaSDKExample
//
//  Created by Nam Kennic on 7/22/18.
//  Copyright © 2018 Uiza. All rights reserved.
//

import UIKit
import UizaSDK8
//import NKButton

class ViewController: UIViewController {
////    let playerViewController = UZPlayerViewController()
    let themeButton = UIButton()
    let textField = UITextField()
    let loadButton = UIButton()

    override func viewDidLoad() {
        super.viewDidLoad()
    }

    override func viewDidLayoutSubviews() {
        super.viewDidLayoutSubviews()
    }

    override public var shouldAutorotate: Bool {
        return true
    }

    @IBAction func loadVideoAction(_ sender: Any) {
        loadVideo()
    }
    
    @objc func loadVideo() {

        UZContentServices().loadEntity(metadataId: nil, publishStatus: .success, page: 0, limit: 20) { (results, error) in

            if let videos = results, let video = videos.first {
                DispatchQueue.main.async {
                    let viewController = FloatingPlayerViewController()
                    viewController.delegate = self
                    viewController.present(with: video).player.controlView.theme = UZTheme1()
                    viewController.floatingHandler?.allowsCornerDocking = true
                }
            }
        }
    }
	
}

extension ViewController: UZPlayerDelegate {
    
    func UZPlayer(player: UZPlayer, playerStateDidChange state: UZPlayerState) {
        // called when player state was changed (buffering, buffered, readyToPlay ...)
    }
    
    func UZPlayer(player: UZPlayer, loadedTimeDidChange loadedDuration: TimeInterval, totalDuration: TimeInterval) {
        // called when loaded duration was changed
    }
    
    func UZPlayer(player: UZPlayer, playTimeDidChange currentTime: TimeInterval, totalTime: TimeInterval) {
        // called when player time was changed
    }
    
    func UZPlayer(player: UZPlayer, playerIsPlaying playing: Bool) {
        // called when playing state was changed
    }
    
}

extension ViewController: UZFloatingPlayerViewProtocol {
    
    func floatingPlayer(_ player: UZFloatingPlayerViewController, didBecomeFloating: Bool) {
        // called when floating player became floating mode or backed to normal mode
    }
    
    func floatingPlayer(_ player: UZFloatingPlayerViewController, onFloatingProgress: CGFloat) {
        // called when user drag the player from normal mode to floating mode
    }
    
    func floatingPlayerDidDismiss(_ player: UZFloatingPlayerViewController) {
        // called when player was dismissed
    }
    
}
