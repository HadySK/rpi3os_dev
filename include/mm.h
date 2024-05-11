#pragma once

#define PAGE_SHIFT 12
#define TABLE_SHIFT 9 
#define SECTION_SHIFT (PAGE_SHIFT + TABLE_SHIFT)
#define PAGE_SIZE (1<< PAGE_SHIFT)