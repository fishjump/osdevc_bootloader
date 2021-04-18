#pragma once

struct GraphicInfo {
    unsigned int horizontalResolution;
    unsigned int verticalResolution;
    unsigned int pixelsPerScanLine;

    unsigned long frameBufferBase;
    unsigned long frameBufferSize;
};

struct MemoryDescriptor {
    unsigned long address;
    unsigned long length;
    unsigned int  type;
} __attribute__((packed));

struct MemoryInfo {
    unsigned int            count;
    struct MemoryDescriptor descriptors[0];
};

struct BootInfo {
    struct GraphicInfo graphicInfo;
    struct MemoryInfo  memoryInfo;
};