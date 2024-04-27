# JJJUtils

[![CI Status](http://img.shields.io/travis/jovito-royeca/JJJUtils.svg?style=flat)](https://travis-ci.org/jovito-royeca/JJJUtils)
[![Version](https://img.shields.io/cocoapods/v/JJJUtils.svg?style=flat)](http://cocoapods.org/pods/JJJUtils)
[![License](https://img.shields.io/cocoapods/l/JJJUtils.svg?style=flat)](http://cocoapods.org/pods/JJJUtils)
[![Platform](https://img.shields.io/cocoapods/p/JJJUtils.svg?style=flat)](http://cocoapods.org/pods/JJJUtils)

## Usage

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

JJJUtils is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "JJJUtils"
```

If using JJJUtils in an OSX project you should use:

```ruby
pod "JJJUtils/OSX"
```

## Releasing a New Build
Set the new version to X.X.X.
```
$ edit JJJUtils.podspec
```
Set the new tag to X.X.X
```
$ pod lib lint --allow-warnings
$ git add -A && git commit -m "Release X.X.X."
$ git tag 'X.X.X'
$ git push --tags
$ pod trunk push JJJUtils.podspec --allow-warnings
```

## Author

Vito Royeca, https://github.com/vito-royeca

## License

JJJUtils is available under the MIT license. See the LICENSE file for more info.
