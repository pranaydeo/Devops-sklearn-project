#!/usr/bin/env groovy
pipeline {
    agent {
        node any
    }

    stages {
        stage('Build Image') {
            when {
                branch 'master'  
            }

            

        }

        stage('Publish Image') {
            when {
                branch 'master'  //only run these steps on the master branch
            }
            
            

        }
    }
}
