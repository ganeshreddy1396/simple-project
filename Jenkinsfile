pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'cmake . && make'
            }
        }
        stage('Cppcheck') {
            steps {
                sh 'cppcheck --enable=all --xml --xml-version=2 src/ 2> cppcheck-results.xml'
            }
        }
        stage('Test') {
            steps {
                sh './tests/test_adder.cpp'
            }
        }
        stage('Store Artifacts') {
            steps {
                archiveArtifacts artifacts: 'cppcheck-results.xml'
            }
        }
        
    }
}

