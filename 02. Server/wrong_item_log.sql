/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50649
Source Host           : localhost:3306
Source Database       : log

Target Server Type    : MYSQL
Target Server Version : 50649
File Encoding         : 65001

Date: 2020-08-11 02:04:38
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `wrong_item_log`
-- ----------------------------
DROP TABLE IF EXISTS `wrong_item_log`;
CREATE TABLE `wrong_item_log` (
  `time` time DEFAULT NULL,
  `pid` int(11) DEFAULT NULL,
  `name` varchar(11) COLLATE big5_bin DEFAULT NULL,
  `item_name` varchar(50) COLLATE big5_bin DEFAULT NULL,
  `item_id` int(11) DEFAULT NULL,
  `type` int(11) DEFAULT NULL,
  `value` int(20) DEFAULT NULL,
  `maxvalue` int(20) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=big5 COLLATE=big5_bin;

-- ----------------------------
-- Records of wrong_item_log
-- ----------------------------
