//
//  AppDelegate.swift
//  UizaSDKExample
//
//  Created by Nam Kennic on 7/22/18.
//  Copyright © 2018 Uiza. All rights reserved.
//

import UIKit
import UizaSDK

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

	var window: UIWindow?

	func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
//		UizaSDK.initWith(appId: "9816792bb84642f09d843af4f93fb748", token: "uap-9816792bb84642f09d843af4f93fb748-b94fcbd1", api: "loctbprod01.uiza.co", enviroment: .production)
		UizaSDK.initWith(appId: "4f892058d35e46dd8a3a660481583b79", token: "uap-4f892058d35e46dd8a3a660481583b79-6a1319cb", api: "veep-api.uiza.co")
		UizaSDK.showRestfulInfo = true
		return true
	}

}

