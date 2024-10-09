package com.loading.strobe

import android.app.Activity
import android.app.Application
import android.app.NotificationChannel
import android.app.NotificationManager
import android.content.Intent
import android.os.Build
import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AppCompatDelegate
import com.loading.tvwebbrowser.activity.main.MainActivity
import com.loading.tvwebbrowser.utils.activemodel.ActiveModelsRepository
import java.net.CookieHandler
import java.net.CookieManager
import java.util.concurrent.ArrayBlockingQueue
import java.util.concurrent.ThreadPoolExecutor
import java.util.concurrent.TimeUnit
import kotlin.system.exitProcess

class StrobeApp : Application(), Application.ActivityLifeCycleCallbacks {
companion object {
     lateinit var instance: Strobe
}