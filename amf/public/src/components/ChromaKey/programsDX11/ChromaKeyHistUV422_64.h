#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer Params
// {
//
//   uint width;                        // Offset:    0 Size:     4 [unused]
//   uint height;                       // Offset:    4 Size:     4 [unused]
//   uint histoSize;                    // Offset:    8 Size:     4
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// planeIn                           texture  unorm4          2d             t0      1 
// pOutHist                              UAV    uint         buf             u0      1 
// Params                            cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_resource_texture2d (unorm,unorm,unorm,unorm) t0
dcl_uav_typed_buffer (uint,uint,uint,uint) u0
dcl_input vThreadID.xy
dcl_temps 1
dcl_thread_group 8, 8, 1
resinfo_indexable(texture2d)(unorm,unorm,unorm,unorm) r0.xy, l(0), t0.xyzw
ftoi r0.xy, r0.xyxx
ige r0.xy, vThreadID.xyxx, r0.xyxx
or r0.x, r0.y, r0.x
if_nz r0.x
  ret 
endif 
mov r0.xy, vThreadID.xyxx
mov r0.zw, l(0,0,0,0)
ld_indexable(texture2d)(unorm,unorm,unorm,unorm) r0.xy, r0.xyzw, t0.xzyw
lt r0.zw, r0.xxxy, l(0.000000, 0.000000, 0.500000, 0.500000)
and r0.z, r0.w, r0.z
if_nz r0.z
  mul r0.xy, r0.yxyy, l(255.000000, 255.000000, 0.000000, 0.000000)
  ftou r0.xy, r0.xyxx
  imad r0.x, r0.x, cb0[0].z, r0.y
  atomic_iadd u0, r0.x, l(1)
endif 
ret 
// Approximately 19 instruction slots used
#endif

const BYTE ChromaKeyHistUV422_CS[] =
{
     68,  88,  66,  67, 157,  85, 
    127,  38, 182, 251, 117, 254, 
    203,   9, 236,  64,  61, 164, 
    226, 168,   1,   0,   0,   0, 
    184,   4,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    236,   1,   0,   0, 252,   1, 
      0,   0,  12,   2,   0,   0, 
     28,   4,   0,   0,  82,  68, 
     69,  70, 176,   1,   0,   0, 
      1,   0,   0,   0, 180,   0, 
      0,   0,   3,   0,   0,   0, 
     60,   0,   0,   0,   0,   5, 
     83,  67,   0,   1,   0,   0, 
    133,   1,   0,   0,  82,  68, 
     49,  49,  60,   0,   0,   0, 
     24,   0,   0,   0,  32,   0, 
      0,   0,  40,   0,   0,   0, 
     36,   0,   0,   0,  12,   0, 
      0,   0,   0,   0,   0,   0, 
    156,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   0,   0, 
      4,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 164,   0,   0,   0, 
      4,   0,   0,   0,   4,   0, 
      0,   0,   1,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   0, 173,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    112, 108,  97, 110, 101,  73, 
    110,   0, 112,  79, 117, 116, 
     72, 105, 115, 116,   0,  80, 
     97, 114,  97, 109, 115,   0, 
    173,   0,   0,   0,   3,   0, 
      0,   0, 204,   0,   0,   0, 
     16,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     68,   1,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,  80,   1, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 116,   1, 
      0,   0,   4,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,  80,   1,   0,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0, 123,   1,   0,   0, 
      8,   0,   0,   0,   4,   0, 
      0,   0,   2,   0,   0,   0, 
     80,   1,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      0,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
    119, 105, 100, 116, 104,   0, 
    100, 119, 111, 114, 100,   0, 
      0,   0,  19,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  74,   1,   0,   0, 
    104, 101, 105, 103, 104, 116, 
      0, 104, 105, 115, 116, 111, 
     83, 105, 122, 101,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  49,  48, 
     46,  49,   0, 171, 171, 171, 
     73,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  79,  83, 
     71,  78,   8,   0,   0,   0, 
      0,   0,   0,   0,   8,   0, 
      0,   0,  83,  72,  69,  88, 
      8,   2,   0,   0,  80,   0, 
      5,   0, 130,   0,   0,   0, 
    106,   8,   0,   1,  89,   0, 
      0,   4,  70, 142,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   0,   0, 
      0,   0,  17,  17,   0,   0, 
    156,   8,   0,   4,   0, 224, 
     17,   0,   0,   0,   0,   0, 
     68,  68,   0,   0,  95,   0, 
      0,   2,  50,   0,   2,   0, 
    104,   0,   0,   2,   1,   0, 
      0,   0, 155,   0,   0,   4, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   1,   0,   0,   0, 
     61,   0,   0, 137, 194,   0, 
      0, 128,  67,  68,   4,   0, 
     50,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
     27,   0,   0,   5,  50,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   0,  16,   0,   0,   0, 
      0,   0,  33,   0,   0,   6, 
     50,   0,  16,   0,   0,   0, 
      0,   0,  70,   0,   2,   0, 
     70,   0,  16,   0,   0,   0, 
      0,   0,  60,   0,   0,   7, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  26,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     31,   0,   4,   3,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     62,   0,   0,   1,  21,   0, 
      0,   1,  54,   0,   0,   4, 
     50,   0,  16,   0,   0,   0, 
      0,   0,  70,   0,   2,   0, 
     54,   0,   0,   8, 194,   0, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  45,   0,   0, 137, 
    194,   0,   0, 128,  67,  68, 
      4,   0,  50,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
    134, 125,  16,   0,   0,   0, 
      0,   0,  49,   0,   0,  10, 
    194,   0,  16,   0,   0,   0, 
      0,   0,   6,   4,  16,   0, 
      0,   0,   0,   0,   2,  64, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,  63,   0,   0,   0,  63, 
      1,   0,   0,   7,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   0,   0, 
      0,   0,  42,   0,  16,   0, 
      0,   0,   0,   0,  31,   0, 
      4,   3,  42,   0,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,  10,  50,   0,  16,   0, 
      0,   0,   0,   0,  22,   5, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    127,  67,   0,   0, 127,  67, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  28,   0,   0,   5, 
     50,   0,  16,   0,   0,   0, 
      0,   0,  70,   0,  16,   0, 
      0,   0,   0,   0,  35,   0, 
      0,  10,  18,   0,  16,   0, 
      0,   0,   0,   0,  10,   0, 
     16,   0,   0,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     26,   0,  16,   0,   0,   0, 
      0,   0, 173,   0,   0,   7, 
      0, 224,  17,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   1,   0,   0,   0, 
     21,   0,   0,   1,  62,   0, 
      0,   1,  83,  84,  65,  84, 
    148,   0,   0,   0,  19,   0, 
      0,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   2,   0,   0,   0, 
      2,   0,   0,   0,   2,   0, 
      0,   0,   2,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0
};
