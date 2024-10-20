_OWORD *__fastcall uu_base32::base_common::format_read_error(__int64 a1, char a2)
{
  unsigned __int64 v2; // r15
  __int64 v3; // rbx
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  _OWORD *v8; // rbx
  char v10; // [rsp+6h] [rbp-122h] BYREF
  char v11; // [rsp+7h] [rbp-121h] BYREF
  char **v12; // [rsp+8h] [rbp-120h] BYREF
  __int64 v13; // [rsp+10h] [rbp-118h]
  _QWORD *v14; // [rsp+18h] [rbp-110h]
  __int64 v15; // [rsp+20h] [rbp-108h]
  __int128 *v16; // [rsp+28h] [rbp-100h]
  __int64 (__fastcall **v17)(); // [rsp+30h] [rbp-F8h]
  __int64 v18; // [rsp+38h] [rbp-F0h]
  char v19; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v20; // [rsp+48h] [rbp-E0h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-D8h]
  __int64 v22; // [rsp+58h] [rbp-D0h]
  __int128 v23; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+70h] [rbp-B8h] BYREF
  _QWORD v25[2]; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v27; // [rsp+90h] [rbp-98h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-88h]
  __int64 v29; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v30; // [rsp+B0h] [rbp-78h] BYREF
  unsigned __int64 v31; // [rsp+B8h] [rbp-70h]
  char **v32; // [rsp+C0h] [rbp-68h]
  int v33; // [rsp+C8h] [rbp-60h]
  _QWORD v34[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v35; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-38h]

  v10 = a2;
  *(_QWORD *)&v27 = 0LL;
  *((_QWORD *)&v27 + 1) = 1LL;
  v28 = 0LL;
  v18 = 32LL;
  v19 = 3;
  v12 = 0LL;
  v14 = 0LL;
  v16 = &v27;
  v17 = &anon_fab1997b4aa932db2117a172ac34a10e_9_llvm_952428305046595287;
  if ( (unsigned __int8)<std::io::error::ErrorKind as core::fmt::Display>::fmt(&v10, &v12) )
    core::result::unwrap_failed(
      anon_fab1997b4aa932db2117a172ac34a10e_11_llvm_952428305046595287,
      55LL,
      &v11,
      &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_17_llvm_13186119769495240950,
      &anon_fab1997b4aa932db2117a172ac34a10e_13_llvm_952428305046595287);
  v23 = v27;
  v24 = v28;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v12, v28, 0LL);
  if ( v12 )
    alloc::raw_vec::handle_error(v13, v14);
  v29 = a1;
  v25[0] = v13;
  v25[1] = v14;
  v26 = 0LL;
  v2 = *((_QWORD *)&v23 + 1);
  if ( !*((_QWORD *)&v23 + 1) || v24 < 0 )
    core::panicking::panic_nounwind(anon_fab1997b4aa932db2117a172ac34a10e_28_llvm_952428305046595287, 162LL);
  v3 = *((_QWORD *)&v23 + 1) + v24;
  v20 = *((_QWORD *)&v23 + 1);
  v21 = *((_QWORD *)&v23 + 1) + v24;
  v22 = 0LL;
  while ( (unsigned int)core::str::validations::next_code_point(&v20) )
  {
    if ( (v4 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F800 )
      core::panicking::panic_nounwind(anon_fab1997b4aa932db2117a172ac34a10e_24_llvm_952428305046595287, 57LL);
    if ( v21 >= v20 )
    {
      v5 = v22;
      v22 += v3 - (v21 + v2) + v20;
      if ( v4 == 1114112 )
        break;
      if ( v5 )
      {
        alloc::string::String::push(v25, v4);
      }
      else
      {
        core::unicode::unicode_data::conversions::to_upper(&v12, v4);
        v6 = 2LL - (HIDWORD(v12) == 0);
        if ( (_DWORD)v13 )
          v6 = 3LL;
        v33 = v13;
        v32 = v12;
        v30 = 0LL;
        v31 = v6;
        while ( 1 )
        {
          v7 = <core::char::ToUppercase as core::iter::traits::iterator::Iterator>::next(&v30);
          if ( v7 == 1114112 )
            break;
          alloc::string::String::push(v25, v7);
        }
        if ( v31 >= 4 )
          core::panicking::panic_nounwind(anon_ff765ffa8c564fe4079308b568cc8f06_3_llvm_17873003023693898768, 101LL);
        if ( v31 < v30 )
          core::panicking::panic_nounwind(anon_a92f4473147c949333621fbaa13d72e0_11_llvm_7006787405930273849, 69LL);
      }
      v2 = v20;
      v3 = v21;
      if ( v21 >= v20 )
        continue;
    }
    core::panicking::panic_nounwind(anon_fab1997b4aa932db2117a172ac34a10e_23_llvm_952428305046595287, 71LL);
  }
  v34[0] = v25;
  v34[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v12 = &off_12C770;
  v13 = 1LL;
  v14 = v34;
  v15 = 1LL;
  v16 = 0LL;
  alloc::fmt::format::format_inner(&v35, &v12);
  v8 = (_OWORD *)v29;
  *(_QWORD *)(v29 + 16) = v36;
  *v8 = v35;
  alloc::raw_vec::RawVec<T,A>::current_memory(&v12, v25);
  if ( v13 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v26, v12, v13, v14);
  alloc::raw_vec::RawVec<T,A>::current_memory(&v12, &v23);
  if ( v13 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v24, v12, v13, v14);
  return v8;
}
