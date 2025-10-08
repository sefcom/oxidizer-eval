__int64 __fastcall sniffnet::networking::manage_packets::analyze_link_header(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  bool v9; // cf
  __int64 result; // rax
  unsigned __int64 v11; // r12
  unsigned int *v12; // rax
  __int64 v13; // rdx
  _BYTE v14[24]; // [rsp+8h] [rbp-70h] BYREF
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int16 v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-38h]

  v6 = *a1;
  if ( v6 == 5 )
  {
    v7 = *(unsigned int *)(a1 + 1) | ((unsigned __int64)a1[3] << 32);
    v8 = *((unsigned int *)a1 + 2) | ((unsigned __int64)a1[6] << 32);
    v9 = __CFADD__(*a4, 14LL);
    *a4 += 14LL;
    a4[1] += v9;
    sniffnet::networking::manage_packets::mac_from_dec_to_hex(v14, v7);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a2);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)&v14[16];
    *(_OWORD *)a2 = *(_OWORD *)v14;
    sniffnet::networking::manage_packets::mac_from_dec_to_hex(v14, v8);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
    result = *(_QWORD *)&v14[16];
    *(_QWORD *)(a3 + 16) = *(_QWORD *)&v14[16];
    *(_OWORD *)a3 = *(_OWORD *)v14;
  }
  else
  {
    if ( v6 == 6 )
    {
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a2);
      *(_QWORD *)a2 = 0x8000000000000000LL;
    }
    else
    {
      v16 = a1[8];
      v15 = *(_OWORD *)a1;
      v9 = __CFADD__(*a4, 16LL);
      *a4 += 16LL;
      a4[1] += v9;
      v11 = 0x8000000000000000LL;
      if ( WORD4(v15) == 6 )
      {
        v11 = 0x8000000000000000LL;
        if ( WORD3(v15) == 1 )
        {
          v12 = (unsigned int *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                                  0LL,
                                  6LL,
                                  (char *)&v15 + 10,
                                  8LL,
                                  &off_2DFF5A0);
          v11 = 0x8000000000000000LL;
          if ( v13 == 6 )
          {
            sniffnet::networking::manage_packets::mac_from_dec_to_hex(
              v14,
              *v12 | ((unsigned __int64)*((unsigned __int16 *)v12 + 2) << 32));
            v11 = *(_QWORD *)v14;
            v17 = *(_OWORD *)&v14[8];
          }
        }
      }
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a2);
      *(_QWORD *)a2 = v11;
      *(_OWORD *)(a2 + 8) = v17;
    }
    result = core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a3);
    *(_QWORD *)a3 = 0x8000000000000000LL;
  }
  return result;
}