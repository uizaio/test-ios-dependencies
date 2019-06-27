//
//  ViewController.swift
//  UizaCastingExample
//
//  Created by phan.huynh.thien.an on 6/26/19.
//  Copyright © 2019 Uiza. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        UZContentServices().loadDetail(entityId: "33812ed9-4b02-408d-aab4-e77c12d16bb0", isLive: false) { (videoItem, error) in
            if let video = videoItem {
                
                DispatchQueue.main.asyncAfter(deadline: .now() + 1.0) {
                    let viewController = UZFloatingPlayerViewController()
                    viewController.present(with: video).player.controlView.theme = UZTheme1()
                    viewController.floatingHandler?.allowsCornerDocking = true
                }
            }
        }
    }


}
