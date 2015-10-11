#include <stdint.h>

const int32_t sin_lut[512] = {
          0,    69967,   139925,   209861,   279765,   349628,   419438,   489184,   558857,   628446,
     697940,   767329,   836603,   905750,   974761,  1043626,  1112333,  1180872,  1249234,  1317408,
    1385383,  1453150,  1520697,  1588016,  1655096,  1721926,  1788497,  1854799,  1920821,  1986555,
    2051989,  2117113,  2181920,  2246397,  2310536,  2374328,  2437761,  2500828,  2563518,  2625822,
    2687730,  2749234,  2810324,  2870990,  2931224,  2991017,  3050359,  3109242,  3167657,  3225594,
    3283046,  3340003,  3396458,  3452401,  3507824,  3562718,  3617077,  3670890,  3724151,  3776850,
    3828982,  3880536,  3931506,  3981884,  4031662,  4080833,  4129390,  4177325,  4224630,  4271300,
    4317326,  4362702,  4407421,  4451476,  4494861,  4537569,  4579593,  4620928,  4661567,  4701504,
    4740733,  4779248,  4817044,  4854114,  4890452,  4926055,  4960915,  4995029,  5028390,  5060994,
    5092836,  5123911,  5154214,  5183741,  5212487,  5240448,  5267621,  5293999,  5319581,  5344362,
    5368337,  5391504,  5413860,  5435400,  5456121,  5476021,  5495096,  5513343,  5530761,  5547345,
    5563094,  5578005,  5592076,  5605305,  5617690,  5629229,  5639920,  5649762,  5658753,  5666891,
    5674177,  5680607,  5686183,  5690902,  5694764,  5697768,  5699914,  5701202,  5701632,  5701202,
    5699914,  5697768,  5694764,  5690902,  5686183,  5680607,  5674177,  5666891,  5658753,  5649762,
    5639920,  5629229,  5617690,  5605305,  5592076,  5578005,  5563094,  5547345,  5530761,  5513343,
    5495096,  5476021,  5456121,  5435400,  5413860,  5391504,  5368337,  5344362,  5319581,  5293999,
    5267621,  5240448,  5212487,  5183741,  5154214,  5123911,  5092836,  5060994,  5028390,  4995029,
    4960915,  4926055,  4890452,  4854114,  4817044,  4779248,  4740733,  4701504,  4661567,  4620928,
    4579593,  4537569,  4494861,  4451476,  4407421,  4362702,  4317326,  4271300,  4224630,  4177325,
    4129390,  4080833,  4031662,  3981884,  3931506,  3880536,  3828982,  3776850,  3724151,  3670890,
    3617077,  3562718,  3507824,  3452401,  3396458,  3340003,  3283046,  3225594,  3167657,  3109242,
    3050359,  2991017,  2931224,  2870990,  2810324,  2749234,  2687730,  2625822,  2563518,  2500828,
    2437761,  2374328,  2310536,  2246397,  2181920,  2117113,  2051989,  1986555,  1920821,  1854799,
    1788497,  1721926,  1655096,  1588016,  1520697,  1453150,  1385383,  1317408,  1249234,  1180872,
    1112333,  1043626,   974761,   905750,   836603,   767329,   697940,   628446,   558857,   489184,
     419438,   349628,   279765,   209861,   139925,    69967,        0,   -69967,  -139925,  -209861,
    -279765,  -349628,  -419438,  -489184,  -558857,  -628446,  -697940,  -767329,  -836603,  -905750,
    -974761, -1043626, -1112333, -1180872, -1249234, -1317408, -1385383, -1453150, -1520697, -1588016,
   -1655096, -1721926, -1788497, -1854799, -1920821, -1986555, -2051989, -2117113, -2181920, -2246397,
   -2310536, -2374328, -2437761, -2500828, -2563518, -2625822, -2687730, -2749234, -2810324, -2870990,
   -2931224, -2991017, -3050359, -3109242, -3167657, -3225594, -3283046, -3340003, -3396458, -3452401,
   -3507824, -3562718, -3617077, -3670890, -3724151, -3776850, -3828982, -3880536, -3931506, -3981884,
   -4031662, -4080833, -4129390, -4177325, -4224630, -4271300, -4317326, -4362702, -4407421, -4451476,
   -4494861, -4537569, -4579593, -4620928, -4661567, -4701504, -4740733, -4779248, -4817044, -4854114,
   -4890452, -4926055, -4960915, -4995029, -5028390, -5060994, -5092836, -5123911, -5154214, -5183741,
   -5212487, -5240448, -5267621, -5293999, -5319581, -5344362, -5368337, -5391504, -5413860, -5435400,
   -5456121, -5476021, -5495096, -5513343, -5530761, -5547345, -5563094, -5578005, -5592076, -5605305,
   -5617690, -5629229, -5639920, -5649762, -5658753, -5666891, -5674177, -5680607, -5686183, -5690902,
   -5694764, -5697768, -5699914, -5701202, -5701632, -5701202, -5699914, -5697768, -5694764, -5690902,
   -5686183, -5680607, -5674177, -5666891, -5658753, -5649762, -5639920, -5629229, -5617690, -5605305,
   -5592076, -5578005, -5563094, -5547345, -5530761, -5513343, -5495096, -5476021, -5456121, -5435400,
   -5413860, -5391504, -5368337, -5344362, -5319581, -5293999, -5267621, -5240448, -5212487, -5183741,
   -5154214, -5123911, -5092836, -5060994, -5028390, -4995029, -4960915, -4926055, -4890452, -4854114,
   -4817044, -4779248, -4740733, -4701504, -4661567, -4620928, -4579593, -4537569, -4494861, -4451476,
   -4407421, -4362702, -4317326, -4271300, -4224630, -4177325, -4129390, -4080833, -4031662, -3981884,
   -3931506, -3880536, -3828982, -3776850, -3724151, -3670890, -3617077, -3562718, -3507824, -3452401,
   -3396458, -3340003, -3283046, -3225594, -3167657, -3109242, -3050359, -2991017, -2931224, -2870990,
   -2810324, -2749234, -2687730, -2625822, -2563518, -2500828, -2437761, -2374328, -2310536, -2246397,
   -2181920, -2117113, -2051989, -1986555, -1920821, -1854799, -1788497, -1721926, -1655096, -1588016,
   -1520697, -1453150, -1385383, -1317408, -1249234, -1180872, -1112333, -1043626,  -974761,  -905750,
    -836603,  -767329,  -697940,  -628446,  -558857,  -489184,  -419438,  -349628,  -279765,  -209861,
    -139925,   -69967
};