/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2016
*
*  TITLE:       MANIFEST.H
*
*  VERSION:     2.51
*
*  DATE:        10 July 2016
*
*  1) Manifest for dll redirection, originally called "defence-in-depth approach".
*  2) Simple update package.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

static const unsigned char ManifestData[1007] = {
    0x3C, 0x3F, 0x78, 0x6D, 0x6C, 0x20, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3D, 0x27, 0x31,
    0x2E, 0x30, 0x27, 0x20, 0x65, 0x6E, 0x63, 0x6F, 0x64, 0x69, 0x6E, 0x67, 0x3D, 0x27, 0x75, 0x74,
    0x66, 0x2D, 0x38, 0x27, 0x20, 0x73, 0x74, 0x61, 0x6E, 0x64, 0x61, 0x6C, 0x6F, 0x6E, 0x65, 0x3D,
    0x27, 0x79, 0x65, 0x73, 0x27, 0x3F, 0x3E, 0x0D, 0x0A, 0x3C, 0x61, 0x73, 0x73, 0x65, 0x6D, 0x62,
    0x6C, 0x79, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6D, 0x6C, 0x6E, 0x73, 0x3D, 0x22, 0x75,
    0x72, 0x6E, 0x3A, 0x73, 0x63, 0x68, 0x65, 0x6D, 0x61, 0x73, 0x2D, 0x6D, 0x69, 0x63, 0x72, 0x6F,
    0x73, 0x6F, 0x66, 0x74, 0x2D, 0x63, 0x6F, 0x6D, 0x3A, 0x61, 0x73, 0x6D, 0x2E, 0x76, 0x31, 0x22,
    0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6D, 0x6C, 0x6E, 0x73, 0x3A, 0x61, 0x73, 0x6D, 0x76,
    0x33, 0x3D, 0x22, 0x75, 0x72, 0x6E, 0x3A, 0x73, 0x63, 0x68, 0x65, 0x6D, 0x61, 0x73, 0x2D, 0x6D,
    0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x2D, 0x63, 0x6F, 0x6D, 0x3A, 0x61, 0x73, 0x6D,
    0x2E, 0x76, 0x33, 0x22, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x6D, 0x61, 0x6E, 0x69, 0x66, 0x65,
    0x73, 0x74, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x31, 0x2E, 0x30, 0x22, 0x0D,
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x3C, 0x74, 0x72, 0x75, 0x73,
    0x74, 0x49, 0x6E, 0x66, 0x6F, 0x20, 0x78, 0x6D, 0x6C, 0x6E, 0x73, 0x3D, 0x22, 0x75, 0x72, 0x6E,
    0x3A, 0x73, 0x63, 0x68, 0x65, 0x6D, 0x61, 0x73, 0x2D, 0x6D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F,
    0x66, 0x74, 0x2D, 0x63, 0x6F, 0x6D, 0x3A, 0x61, 0x73, 0x6D, 0x2E, 0x76, 0x33, 0x22, 0x3E, 0x0D,
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x73, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 0x3E, 0x0D,
    0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x65,
    0x64, 0x50, 0x72, 0x69, 0x76, 0x69, 0x6C, 0x65, 0x67, 0x65, 0x73, 0x3E, 0x0D, 0x0A, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x65, 0x64,
    0x45, 0x78, 0x65, 0x63, 0x75, 0x74, 0x69, 0x6F, 0x6E, 0x4C, 0x65, 0x76, 0x65, 0x6C, 0x0D, 0x0A,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6C, 0x65, 0x76, 0x65,
    0x6C, 0x3D, 0x22, 0x72, 0x65, 0x71, 0x75, 0x69, 0x72, 0x65, 0x41, 0x64, 0x6D, 0x69, 0x6E, 0x69,
    0x73, 0x74, 0x72, 0x61, 0x74, 0x6F, 0x72, 0x22, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x75, 0x69, 0x41, 0x63, 0x63, 0x65, 0x73, 0x73, 0x3D, 0x22,
    0x66, 0x61, 0x6C, 0x73, 0x65, 0x22, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x2F, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F,
    0x72, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x65, 0x64, 0x50, 0x72, 0x69, 0x76, 0x69, 0x6C, 0x65,
    0x67, 0x65, 0x73, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F, 0x73, 0x65, 0x63, 0x75,
    0x72, 0x69, 0x74, 0x79, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x2F, 0x74, 0x72, 0x75, 0x73, 0x74,
    0x49, 0x6E, 0x66, 0x6F, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x61, 0x73, 0x6D, 0x76, 0x33, 0x3A,
    0x61, 0x70, 0x70, 0x6C, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x20, 0x20,
    0x20, 0x20, 0x3C, 0x61, 0x73, 0x6D, 0x76, 0x33, 0x3A, 0x77, 0x69, 0x6E, 0x64, 0x6F, 0x77, 0x73,
    0x53, 0x65, 0x74, 0x74, 0x69, 0x6E, 0x67, 0x73, 0x20, 0x78, 0x6D, 0x6C, 0x6E, 0x73, 0x3D, 0x22,
    0x68, 0x74, 0x74, 0x70, 0x3A, 0x2F, 0x2F, 0x73, 0x63, 0x68, 0x65, 0x6D, 0x61, 0x73, 0x2E, 0x6D,
    0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x2E, 0x63, 0x6F, 0x6D, 0x2F, 0x53, 0x4D, 0x49,
    0x2F, 0x32, 0x30, 0x30, 0x35, 0x2F, 0x57, 0x69, 0x6E, 0x64, 0x6F, 0x77, 0x73, 0x53, 0x65, 0x74,
    0x74, 0x69, 0x6E, 0x67, 0x73, 0x22, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C,
    0x61, 0x75, 0x74, 0x6F, 0x45, 0x6C, 0x65, 0x76, 0x61, 0x74, 0x65, 0x3E, 0x74, 0x72, 0x75, 0x65,
    0x3C, 0x2F, 0x61, 0x75, 0x74, 0x6F, 0x45, 0x6C, 0x65, 0x76, 0x61, 0x74, 0x65, 0x3E, 0x0D, 0x0A,
    0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F, 0x61, 0x73, 0x6D, 0x76, 0x33, 0x3A, 0x77, 0x69, 0x6E, 0x64,
    0x6F, 0x77, 0x73, 0x53, 0x65, 0x74, 0x74, 0x69, 0x6E, 0x67, 0x73, 0x3E, 0x0D, 0x0A, 0x20, 0x20,
    0x3C, 0x2F, 0x61, 0x73, 0x6D, 0x76, 0x33, 0x3A, 0x61, 0x70, 0x70, 0x6C, 0x69, 0x63, 0x61, 0x74,
    0x69, 0x6F, 0x6E, 0x3E, 0x0D, 0x0A, 0x20, 0x3C, 0x21, 0x2D, 0x2D, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x59, 0x6F, 0x75, 0x72, 0x20, 0x22, 0x64, 0x65, 0x66, 0x65, 0x6E, 0x63, 0x65,
    0x2D, 0x69, 0x6E, 0x2D, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x61, 0x70, 0x70, 0x72, 0x6F, 0x61,
    0x63, 0x68, 0x22, 0x20, 0x69, 0x73, 0x20, 0x61, 0x63, 0x74, 0x75, 0x61, 0x6C, 0x6C, 0x79, 0x20,
    0x79, 0x65, 0x74, 0x20, 0x61, 0x6E, 0x6F, 0x74, 0x68, 0x65, 0x72, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x75, 0x6E, 0x64, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x65, 0x64, 0x20,
    0x62, 0x61, 0x63, 0x6B, 0x64, 0x6F, 0x6F, 0x72, 0x2E, 0x20, 0x49, 0x20, 0x73, 0x69, 0x6E, 0x63,
    0x65, 0x72, 0x65, 0x6C, 0x79, 0x20, 0x68, 0x6F, 0x70, 0x65, 0x20, 0x79, 0x6F, 0x75, 0x20, 0x77,
    0x69, 0x6C, 0x6C, 0x20, 0x6E, 0x65, 0x76, 0x65, 0x72, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x64, 0x6F, 0x20, 0x61, 0x6E, 0x79, 0x74, 0x68, 0x69, 0x6E, 0x67, 0x20, 0x6D, 0x6F, 0x72,
    0x65, 0x20, 0x63, 0x6F, 0x6D, 0x70, 0x6C, 0x65, 0x78, 0x20, 0x74, 0x68, 0x61, 0x6E, 0x20, 0x63,
    0x6F, 0x64, 0x69, 0x6E, 0x67, 0x20, 0x54, 0x65, 0x74, 0x72, 0x69, 0x73, 0x2E, 0x0D, 0x0A, 0x20,
    0x20, 0x2D, 0x2D, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x3C, 0x66, 0x69, 0x6C, 0x65, 0x0D, 0x0A, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x6C, 0x6F, 0x61, 0x64, 0x46, 0x72, 0x6F, 0x6D, 0x3D, 0x22, 0x25,
    0x73, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x72, 0x6F, 0x6F, 0x74, 0x25, 0x5C, 0x73, 0x79, 0x73, 0x74,
    0x65, 0x6D, 0x33, 0x32, 0x5C, 0x73, 0x79, 0x73, 0x70, 0x72, 0x65, 0x70, 0x5C, 0x63, 0x72, 0x79,
    0x70, 0x74, 0x62, 0x61, 0x73, 0x65, 0x2E, 0x44, 0x4C, 0x4C, 0x22, 0x0D, 0x0A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x63, 0x72, 0x79, 0x70, 0x74, 0x62, 0x61,
    0x73, 0x65, 0x2E, 0x44, 0x4C, 0x4C, 0x22, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2F,
    0x3E, 0x0D, 0x0A, 0x20, 0x3C, 0x2F, 0x61, 0x73, 0x73, 0x65, 0x6D, 0x62, 0x6C, 0x79, 0x3E
};

static const unsigned char PackageData[444] = {
    0x3C, 0x3F, 0x78, 0x6D, 0x6C, 0x20, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x31,
    0x2E, 0x30, 0x22, 0x20, 0x65, 0x6E, 0x63, 0x6F, 0x64, 0x69, 0x6E, 0x67, 0x3D, 0x22, 0x75, 0x74,
    0x66, 0x2D, 0x38, 0x22, 0x3F, 0x3E, 0x0D, 0x0A, 0x3C, 0x75, 0x6E, 0x61, 0x74, 0x74, 0x65, 0x6E,
    0x64, 0x20, 0x78, 0x6D, 0x6C, 0x6E, 0x73, 0x3D, 0x22, 0x75, 0x72, 0x6E, 0x3A, 0x73, 0x63, 0x68,
    0x65, 0x6D, 0x61, 0x73, 0x2D, 0x6D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x2D, 0x63,
    0x6F, 0x6D, 0x3A, 0x75, 0x6E, 0x61, 0x74, 0x74, 0x65, 0x6E, 0x64, 0x22, 0x3E, 0x0D, 0x0A, 0x20,
    0x20, 0x20, 0x20, 0x3C, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x69, 0x6E, 0x67, 0x3E, 0x0D, 0x0A,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x70, 0x61, 0x63, 0x6B, 0x61, 0x67, 0x65,
    0x20, 0x61, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x69, 0x6E, 0x73, 0x74, 0x61, 0x6C, 0x6C,
    0x22, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x3C, 0x61, 0x73, 0x73, 0x65, 0x6D, 0x62, 0x6C, 0x79, 0x49, 0x64, 0x65, 0x6E, 0x74, 0x69, 0x74,
    0x79, 0x20, 0x20, 0x6E, 0x61, 0x6D, 0x65, 0x3D, 0x22, 0x50, 0x61, 0x63, 0x6B, 0x61, 0x67, 0x65,
    0x5F, 0x31, 0x5F, 0x66, 0x6F, 0x72, 0x5F, 0x4B, 0x42, 0x39, 0x32, 0x39, 0x37, 0x36, 0x31, 0x22,
    0x20, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x36, 0x2E, 0x30, 0x2E, 0x31, 0x2E,
    0x31, 0x22, 0x20, 0x6C, 0x61, 0x6E, 0x67, 0x75, 0x61, 0x67, 0x65, 0x3D, 0x22, 0x6E, 0x65, 0x75,
    0x74, 0x72, 0x61, 0x6C, 0x22, 0x20, 0x70, 0x72, 0x6F, 0x63, 0x65, 0x73, 0x73, 0x6F, 0x72, 0x41,
    0x72, 0x63, 0x68, 0x69, 0x74, 0x65, 0x63, 0x74, 0x75, 0x72, 0x65, 0x3D, 0x22, 0x78, 0x38, 0x36,
    0x22, 0x20, 0x70, 0x75, 0x62, 0x6C, 0x69, 0x63, 0x4B, 0x65, 0x79, 0x54, 0x6F, 0x6B, 0x65, 0x6E,
    0x3D, 0x22, 0x33, 0x31, 0x62, 0x66, 0x33, 0x38, 0x35, 0x36, 0x61, 0x64, 0x33, 0x36, 0x34, 0x65,
    0x33, 0x35, 0x22, 0x2F, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x3C, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x20, 0x6C, 0x6F, 0x63, 0x61, 0x74,
    0x69, 0x6F, 0x6E, 0x3D, 0x22, 0x25, 0x63, 0x6F, 0x6E, 0x66, 0x69, 0x67, 0x73, 0x65, 0x74, 0x72,
    0x6F, 0x6F, 0x74, 0x25, 0x5C, 0x57, 0x69, 0x6E, 0x64, 0x6F, 0x77, 0x73, 0x36, 0x2E, 0x30, 0x2D,
    0x4B, 0x42, 0x39, 0x32, 0x39, 0x37, 0x36, 0x31, 0x2D, 0x78, 0x38, 0x36, 0x2E, 0x43, 0x41, 0x42,
    0x22, 0x20, 0x2F, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C, 0x2F,
    0x70, 0x61, 0x63, 0x6B, 0x61, 0x67, 0x65, 0x3E, 0x0D, 0x0A, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3C,
    0x2F, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x69, 0x6E, 0x67, 0x3E, 0x0D, 0x0A, 0x3C, 0x2F, 0x75,
    0x6E, 0x61, 0x74, 0x74, 0x65, 0x6E, 0x64, 0x3E, 0x0D, 0x0A, 0x0D, 0x0A
};
