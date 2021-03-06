

const size_t muteImgLen = 1469;

const uint8_t muteImg[] = {
0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x4d, 0x08, 0x06, 0x00, 0x00, 0x00, 0xe3, 0x09, 0xe9,
0xb0, 0x00, 0x00, 0x00, 0x04, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0x08, 0x7c, 0x08, 0x64,
0x88, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x12, 0xe6, 0x00, 0x00, 0x12,
0xe6, 0x01, 0xcd, 0xbf, 0x40, 0xa8, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f,
0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x77, 0x77, 0x77, 0x2e, 0x69, 0x6e, 0x6b, 0x73, 0x63,
0x61, 0x70, 0x65, 0x2e, 0x6f, 0x72, 0x67, 0x9b, 0xee, 0x3c, 0x1a, 0x00, 0x00, 0x05, 0x3a, 0x49,
0x44, 0x41, 0x54, 0x78, 0x9c, 0xed, 0x9c, 0x5f, 0x88, 0x55, 0x45, 0x1c, 0xc7, 0xbf, 0xa3, 0x26,
0x58, 0x9b, 0x4a, 0xa0, 0xab, 0xb9, 0x88, 0x19, 0x95, 0x84, 0x19, 0x88, 0x2c, 0x41, 0x49, 0x6c,
0x10, 0x6d, 0x85, 0x11, 0x85, 0x0f, 0x11, 0x28, 0x04, 0x12, 0x94, 0x41, 0x59, 0x41, 0x04, 0xf6,
0xef, 0x21, 0x24, 0x8b, 0xd0, 0x94, 0x08, 0x7a, 0x88, 0xe8, 0xb1, 0x3f, 0x50, 0xf4, 0x10, 0x95,
0x6d, 0x7f, 0x88, 0xa2, 0x60, 0x1f, 0x6c, 0x13, 0x05, 0x49, 0xdd, 0x96, 0x7a, 0xd8, 0xdc, 0xd0,
0x35, 0x29, 0x77, 0xef, 0xa7, 0x87, 0x33, 0x77, 0x9d, 0x3d, 0xbb, 0xf7, 0xde, 0xf3, 0x67, 0xe6,
0x9c, 0xbb, 0xf7, 0xde, 0xcf, 0xcb, 0xbd, 0x3b, 0xe7, 0x9c, 0xdf, 0xcc, 0x7c, 0xee, 0xcc, 0xdc,
0xd9, 0x7b, 0xe6, 0x8c, 0xd4, 0xa1, 0x43, 0x87, 0x0e, 0xc9, 0x01, 0xba, 0x80, 0xb5, 0xc0, 0x65,
0x65, 0x97, 0xa5, 0x69, 0x01, 0xd6, 0x00, 0x4f, 0x01, 0x5f, 0x03, 0xe3, 0x4c, 0x67, 0x1c, 0x18,
0x00, 0x9e, 0x04, 0xd6, 0x94, 0x5d, 0xd6, 0xd2, 0x01, 0x96, 0x01, 0x7b, 0x80, 0x7f, 0x49, 0xc6,
0x05, 0xe0, 0x2d, 0xe0, 0xca, 0xb2, 0xcb, 0x5e, 0x0a, 0xc0, 0x1d, 0xc0, 0x58, 0x42, 0x59, 0x71,
0xce, 0x00, 0x5b, 0xca, 0xae, 0x43, 0xa1, 0x00, 0x3b, 0x81, 0x89, 0x8c, 0xc2, 0xaa, 0x4c, 0x00,
0x3b, 0xcb, 0xae, 0x4b, 0x21, 0x00, 0xf7, 0x02, 0x93, 0x39, 0x85, 0x55, 0xa9, 0x00, 0x5b, 0x33,
0x96, 0xe3, 0x41, 0xe0, 0x10, 0x70, 0x18, 0x38, 0x00, 0x2c, 0xf3, 0x5d, 0x57, 0x2f, 0x00, 0xd7,
0x01, 0x67, 0x3d, 0x09, 0xab, 0x72, 0x06, 0xb8, 0x26, 0x45, 0x19, 0x8c, 0x95, 0x14, 0xe7, 0x57,
0x60, 0x51, 0xc8, 0xfa, 0x67, 0x02, 0xf8, 0xc8, 0xb3, 0xb0, 0x2a, 0xef, 0x27, 0xcc, 0xdf, 0x00,
0x07, 0xeb, 0xc4, 0xd9, 0x11, 0xda, 0x41, 0x2a, 0x80, 0x5e, 0xa2, 0xee, 0x14, 0x82, 0x0a, 0xb0,
0xa9, 0x41, 0xfe, 0x8d, 0x84, 0x01, 0xbc, 0x9e, 0xa4, 0x2e, 0xf3, 0xfc, 0x28, 0x49, 0xc4, 0x76,
0x49, 0x26, 0x50, 0x6c, 0x23, 0x69, 0x5b, 0xad, 0x83, 0x80, 0x91, 0x74, 0x40, 0xd2, 0x23, 0x0d,
0xe2, 0x1c, 0xf3, 0x59, 0xa8, 0xdc, 0x00, 0x27, 0x02, 0xb5, 0xb2, 0x2a, 0x27, 0x6b, 0xe4, 0x9b,
0xa4, 0x85, 0x01, 0x1c, 0x05, 0xba, 0x8a, 0xf6, 0x52, 0x13, 0x60, 0x75, 0x50, 0x5d, 0x17, 0xe9,
0x89, 0xe5, 0x6b, 0x80, 0x37, 0x12, 0x5c, 0x77, 0x0a, 0xb8, 0x3a, 0x69, 0x7d, 0x8a, 0xea, 0x9e,
0x45, 0xcd, 0xe0, 0xa7, 0xf2, 0x21, 0xea, 0x92, 0xfb, 0x25, 0x35, 0x9a, 0xcb, 0x0d, 0x4b, 0xea,
0x33, 0xc6, 0x1c, 0x4f, 0x9a, 0x49, 0x51, 0xd2, 0xba, 0x0b, 0xca, 0x67, 0xa5, 0x14, 0x56, 0x98,
0x54, 0x9c, 0xb4, 0x85, 0x05, 0xe4, 0x51, 0x91, 0x34, 0x1a, 0x5a, 0x58, 0x61, 0x00, 0x5b, 0xc3,
0x0d, 0x63, 0x40, 0xf4, 0x1f, 0xc6, 0x76, 0x02, 0x8d, 0x61, 0xa5, 0x40, 0x58, 0x69, 0xad, 0x27,
0x4c, 0x0a, 0x2a, 0xad, 0x35, 0x85, 0x49, 0xc1, 0xa4, 0xb5, 0xae, 0x30, 0x29, 0x88, 0xb4, 0xd6,
0x16, 0x26, 0x79, 0x97, 0xd6, 0xfa, 0xc2, 0x24, 0xaf, 0xd2, 0xda, 0x43, 0x98, 0xe4, 0x4d, 0x5a,
0xfb, 0x08, 0x93, 0xbc, 0x48, 0x6b, 0x2f, 0x61, 0x52, 0x6e, 0x69, 0xed, 0x27, 0x4c, 0xca, 0x25,
0xad, 0x3d, 0x85, 0x49, 0x99, 0xa5, 0xb5, 0xaf, 0x30, 0x29, 0x93, 0xb4, 0xf6, 0x16, 0x26, 0xa5,
0x96, 0x36, 0x09, 0x6c, 0x4b, 0x2b, 0x0c, 0xe8, 0x06, 0x36, 0x96, 0x5d, 0x57, 0x6f, 0xa4, 0x90,
0x96, 0xa9, 0x85, 0x01, 0xcb, 0x89, 0xee, 0x5f, 0x66, 0xba, 0x07, 0xda, 0x94, 0x24, 0x94, 0x96,
0x57, 0x18, 0xed, 0x26, 0xcd, 0x87, 0xb0, 0xb9, 0x2d, 0x0d, 0xd8, 0x00, 0x2c, 0x77, 0xfe, 0xae,
0x27, 0xcd, 0x15, 0xb6, 0x3f, 0x87, 0xb0, 0x69, 0xd2, 0xec, 0xf1, 0x0d, 0xe5, 0x18, 0x48, 0x09,
0xb0, 0xc3, 0x56, 0x60, 0x0c, 0xe8, 0xb6, 0x69, 0xb5, 0xa4, 0xf9, 0x14, 0x36, 0x25, 0x0d, 0x58,
0xc1, 0xc5, 0x15, 0x49, 0xde, 0xef, 0x9a, 0x87, 0xb8, 0x47, 0x70, 0xb3, 0x7d, 0x5d, 0x2a, 0xa9,
0xde, 0x27, 0x5d, 0x91, 0xf4, 0x90, 0xa4, 0x77, 0x25, 0xed, 0x93, 0xf4, 0x58, 0x83, 0xb8, 0xc3,
0x92, 0xfa, 0x24, 0x9d, 0x95, 0xf4, 0xa5, 0xa4, 0xf5, 0x75, 0xce, 0x5d, 0x6f, 0xf3, 0x97, 0xa4,
0xcd, 0x0d, 0xe2, 0xa6, 0x26, 0x84, 0x34, 0x53, 0xe3, 0xbd, 0x4b, 0x48, 0x61, 0x49, 0xcb, 0x90,
0x99, 0x22, 0x97, 0x25, 0x54, 0x09, 0x2d, 0x2c, 0x38, 0x45, 0x4b, 0x9b, 0xf3, 0xc2, 0xa4, 0x62,
0xa5, 0xb5, 0x84, 0x30, 0xa9, 0x38, 0x69, 0x93, 0x6a, 0x11, 0x61, 0x92, 0xb4, 0xa0, 0xa0, 0x7c,
0x3e, 0x91, 0x34, 0xa1, 0x74, 0xc2, 0xc6, 0x25, 0x7d, 0x25, 0xe9, 0xfa, 0xb0, 0x45, 0x4b, 0x4f,
0x51, 0xd2, 0xd2, 0x0a, 0xab, 0xb6, 0xb0, 0xa6, 0x13, 0x26, 0x85, 0xed, 0x9e, 0xee, 0xda, 0x8a,
0x39, 0xdf, 0x25, 0x5d, 0x42, 0x49, 0xab, 0x0e, 0xfa, 0x83, 0x6a, 0x31, 0x61, 0x52, 0x18, 0x69,
0x2d, 0xf3, 0x2d, 0x59, 0x8b, 0x10, 0x63, 0xda, 0x0b, 0x92, 0x4e, 0xa9, 0x45, 0x85, 0x49, 0x61,
0x5a, 0x5a, 0x4b, 0x0b, 0x93, 0x3c, 0xb7, 0xb4, 0x0c, 0x83, 0xbe, 0xef, 0x69, 0xc5, 0xb8, 0x7d,
0x75, 0x17, 0x11, 0xfe, 0xe7, 0x29, 0xf6, 0x14, 0xde, 0xa4, 0xe5, 0xf8, 0x96, 0xf4, 0x39, 0xad,
0x18, 0xb1, 0xaf, 0x4b, 0x9c, 0xb4, 0x31, 0x8f, 0xf1, 0x25, 0x79, 0x92, 0xd6, 0x04, 0x2d, 0x4c,
0x92, 0x90, 0xf4, 0xbb, 0x7d, 0xef, 0xde, 0x99, 0x1a, 0x99, 0xe5, 0xdc, 0x72, 0xf1, 0xf8, 0x03,
0x62, 0x5e, 0x7e, 0x74, 0xca, 0xf4, 0xa1, 0x93, 0xde, 0x5f, 0xa6, 0x9f, 0x19, 0x90, 0x5e, 0x58,
0x37, 0x30, 0xe4, 0xdf, 0x17, 0x00, 0xbb, 0x6d, 0x99, 0x2e, 0x01, 0x4e, 0xdb, 0xb4, 0x09, 0x60,
0x69, 0xa3, 0x7a, 0x14, 0x06, 0xe9, 0x85, 0x19, 0x60, 0x30, 0x84, 0x2d, 0xe0, 0x1c, 0xf6, 0x69,
0x63, 0xe0, 0x6e, 0x27, 0xfd, 0xbb, 0xb2, 0x3d, 0x4d, 0x41, 0x4a, 0x61, 0xce, 0x75, 0x7b, 0xfd,
0xfb, 0x02, 0xe0, 0x65, 0x27, 0x8f, 0x01, 0x27, 0xfd, 0xd1, 0x72, 0x0c, 0xc5, 0x20, 0x5b, 0x97,
0xdc, 0x68, 0xaf, 0x5d, 0x0c, 0x1c, 0xf3, 0x2c, 0xec, 0x08, 0xb0, 0xd8, 0xc6, 0xbf, 0xcb, 0x49,
0xff, 0x1b, 0x58, 0x52, 0xbf, 0x36, 0x05, 0x40, 0xf6, 0x31, 0x6c, 0x08, 0x58, 0x68, 0x63, 0xdc,
0x60, 0x2b, 0xe4, 0x83, 0x31, 0xe0, 0x5a, 0x1b, 0x77, 0x11, 0xf0, 0x8b, 0x73, 0xec, 0xa5, 0x72,
0x6d, 0x29, 0x5b, 0x97, 0x04, 0x3e, 0x73, 0xd2, 0x0f, 0x3a, 0xb1, 0x36, 0x01, 0xa3, 0x39, 0x85,
0x8d, 0x00, 0xbd, 0x4e, 0xcc, 0xf7, 0x9c, 0x63, 0xc3, 0x34, 0xc3, 0x13, 0x75, 0xc0, 0x2b, 0x09,
0x2a, 0x72, 0x12, 0x58, 0xeb, 0x5c, 0xd3, 0xc7, 0xf4, 0xe7, 0xd5, 0x77, 0x39, 0xc7, 0x56, 0x03,
0xdf, 0x66, 0x14, 0xf6, 0x0d, 0xce, 0x36, 0x13, 0xc0, 0x33, 0xce, 0xb1, 0x0b, 0xc0, 0xad, 0x45,
0xfb, 0x99, 0x01, 0x70, 0x1b, 0x8d, 0x9f, 0x0a, 0x9e, 0x26, 0xcc, 0xb9, 0xf6, 0xb9, 0xd8, 0x79,
0xcf, 0x3b, 0xc7, 0xe6, 0x01, 0x0f, 0x90, 0x7c, 0x1a, 0x32, 0x04, 0xdc, 0x47, 0x34, 0x99, 0x16,
0x30, 0x1f, 0x78, 0x35, 0x76, 0xce, 0xae, 0x78, 0x19, 0x4a, 0x01, 0xd8, 0x97, 0x45, 0x98, 0x73,
0xfd, 0xdb, 0xb1, 0xf3, 0x3f, 0xc6, 0x59, 0xb6, 0x60, 0xcf, 0xe9, 0x05, 0x76, 0xdb, 0x63, 0x83,
0xc0, 0x71, 0xe0, 0x7b, 0xa2, 0xe7, 0xde, 0x9f, 0x25, 0xb6, 0xc4, 0x00, 0x58, 0x09, 0x7c, 0x1a,
0x8b, 0xfb, 0x4e, 0x55, 0x68, 0xe9, 0x00, 0xaf, 0xd5, 0x11, 0xd6, 0x70, 0x41, 0x1d, 0x51, 0x8b,
0x8a, 0x8b, 0x1f, 0x05, 0x9e, 0x06, 0x2e, 0x4d, 0x59, 0x96, 0x2e, 0xe0, 0x45, 0x66, 0x6e, 0xaf,
0xf3, 0x26, 0x50, 0xc6, 0x7d, 0xdc, 0xd9, 0x01, 0x6e, 0x61, 0xf6, 0xbd, 0x34, 0xea, 0xb6, 0xb0,
0x59, 0xe2, 0x3c, 0x4c, 0x34, 0x11, 0x75, 0x39, 0x4d, 0xb4, 0x15, 0x4e, 0x3f, 0x35, 0x66, 0xef,
0xc0, 0xe5, 0xc0, 0xfd, 0x44, 0x83, 0x7d, 0x7c, 0xd7, 0x98, 0xf3, 0x40, 0xa3, 0x67, 0xd3, 0xcb,
0x01, 0x78, 0x82, 0xe9, 0x7b, 0x02, 0xfd, 0x40, 0x86, 0x0d, 0x93, 0x80, 0x75, 0xc0, 0x17, 0x35,
0x5a, 0x6d, 0xc5, 0x7e, 0x10, 0x3f, 0x01, 0x9f, 0xdb, 0x3c, 0x7e, 0xa3, 0xf6, 0x78, 0x7a, 0x08,
0x58, 0x17, 0xa0, 0xba, 0xfe, 0x00, 0x56, 0x01, 0xf7, 0x00, 0x37, 0x01, 0xf3, 0x73, 0xc6, 0xea,
0x27, 0x9a, 0x92, 0xa4, 0xdd, 0x0d, 0xa6, 0x62, 0x85, 0xde, 0xe9, 0xab, 0x5e, 0x69, 0x29, 0x7d,
0xd0, 0x04, 0xae, 0x92, 0xb4, 0x45, 0xd2, 0xed, 0x92, 0x6e, 0x94, 0xd4, 0xa3, 0x99, 0xe5, 0xfa,
0x53, 0xd2, 0xcf, 0x92, 0x06, 0x24, 0x7d, 0x60, 0x8c, 0x39, 0x51, 0x60, 0x11, 0x9b, 0x1f, 0xa2,
0x99, 0x7d, 0x75, 0xdc, 0xfb, 0x87, 0x26, 0xdc, 0x78, 0xae, 0x79, 0xbe, 0x6d, 0x2c, 0xc6, 0x98,
0xf3, 0x8a, 0xee, 0x68, 0x49, 0x52, 0xc5, 0x18, 0x73, 0xae, 0xcc, 0xf2, 0xcc, 0x46, 0xd3, 0x49,
0x9b, 0x0b, 0x04, 0x59, 0x96, 0x00, 0x6c, 0x96, 0xb4, 0x22, 0x47, 0x88, 0x6a, 0xb9, 0x16, 0x90,
0x6f, 0xf1, 0xf1, 0x1f, 0xc6, 0x98, 0xe6, 0xf9, 0x4d, 0xad, 0x16, 0xc0, 0xe3, 0x29, 0xbf, 0x0d,
0x43, 0xe3, 0xfd, 0x37, 0xb5, 0x10, 0xdd, 0x73, 0x55, 0x80, 0x98, 0x79, 0xe8, 0x69, 0x7c, 0x4a,
0x3a, 0x42, 0x74, 0xcf, 0x3d, 0x8a, 0x56, 0x09, 0x5d, 0x11, 0x20, 0x76, 0x5a, 0xfe, 0x92, 0xb4,
0xb7, 0xec, 0x42, 0x74, 0xe8, 0x90, 0x8d, 0xff, 0x01, 0x09, 0x85, 0x5e, 0x26, 0x02, 0x05, 0x2f,
0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

