.section .data
.global ramdisk_start, ramdisk_end
ramdisk_start:
#ifdef __LP64__
.incbin "build/ramdisk64.img"
#else
.incbin "build/ramdisk32.img"
#endif
ramdisk_end:

.section .rodata
.globl logo
logo:
.incbin "resources/logo.txt"
.byte 0
