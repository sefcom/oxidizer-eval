        _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r9
  __int64 v12; // r12
  __int64 v13; // r15
  _QWORD *v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 result; // rax
  _OWORD *v24; // rcx
  __int64 v25; // [rsp+0h] [rbp-158h]
  __int128 *v26; // [rsp+8h] [rbp-150h] BYREF
  __int64 v27; // [rsp+10h] [rbp-148h]
  __int64 **v28; // [rsp+18h] [rbp-140h]
  __int128 v29; // [rsp+20h] [rbp-138h]
  _QWORD *v30; // [rsp+38h] [rbp-120h]
  __int64 v31; // [rsp+40h] [rbp-118h] BYREF
  __int64 v32; // [rsp+48h] [rbp-110h]
  __int128 v33; // [rsp+50h] [rbp-108h]
  __int64 (__fastcall *v34)(); // [rsp+60h] [rbp-F8h]
  __int64 v35; // [rsp+70h] [rbp-E8h]
  __int128 v36; // [rsp+78h] [rbp-E0h] BYREF
  __int64 *v37; // [rsp+88h] [rbp-D0h] BYREF
  __int128 v38; // [rsp+90h] [rbp-C8h]
  __int64 (__fastcall *v39)(); // [rsp+A0h] [rbp-B8h]
  _QWORD v40[2]; // [rsp+A8h] [rbp-B0h] BYREF
  unsigned __int64 v41; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-98h]
  __int64 v43; // [rsp+C8h] [rbp-90h]
  __int128 v44; // [rsp+D0h] [rbp-88h]
  __int128 v45; // [rsp+E0h] [rbp-78h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+F0h] [rbp-68h]
  _BYTE v47[96]; // [rsp+F8h] [rbp-60h] BYREF

  v30 = a1;
  core::iter::traits::iterator::Iterator::zip(v47);
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v41, v47);
  v5 = v42;
  if ( !v42 )
  {
LABEL_11:
    v26 = (__int128 *)&off_135BA0;
    v27 = 1LL;
    v28 = (__int64 **)&byte_8;
    v29 = 0LL;
    std::io::stdio::_print(&v26);
    result = 0x8000000000000000LL;
    *v30 = 0x8000000000000000LL;
    return result;
  }
  v6 = a4[12];
  v7 = a4[13];
  v8 = a4[23];
  v35 = v7;
  while ( 1 )
  {
    v9 = v41;
    v31 = v5;
    v32 = v43;
    v36 = v44;
    if ( (unsigned __int8)uucore::features::ranges::contain(v6, v7, v41) )
      break;
    v37 = &v31;
    *(_QWORD *)&v38 = <&T as core::fmt::Display>::fmt;
    *((_QWORD *)&v38 + 1) = &v36;
    v39 = <&T as core::fmt::Display>::fmt;
    v26 = (__int128 *)&unk_1A370;
    v27 = 2LL;
    v28 = &v37;
    v29 = 2uLL;
    std::io::stdio::_print(&v26);
LABEL_4:
    <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v41, v47);
    v5 = v42;
    if ( !v42 )
      goto LABEL_11;
  }
  v10 = v32;
  v11 = v32;
  if ( v9 > 1 )
  {
    v12 = v6;
    v13 = v8;
    v14 = a4;
    v26 = (__int128 *)&off_135BC8;
    v27 = 1LL;
    v28 = (__int64 **)&byte_8;
    v29 = 0LL;
    std::io::stdio::_print(&v26);
    v15 = v31;
    v16 = v32;
    if ( !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            1LL,
            v31,
            v32) )
      core::str::slice_error_fail(v15, v16, 1LL, v16, &off_135BD8);
    v11 = v17;
    a4 = v14;
    v8 = v13;
    v6 = v12;
    v7 = v35;
  }
  v18 = v36;
  uu_numfmt::format::format_string(
    &v37,
    v36,
    *((unsigned __int64 *)&v36 + 1),
    (__int64)a4,
    (v10 != 0) & (unsigned __int8)(v8 == 0),
    *((_QWORD *)&v36 + 1) + v11);
  v33 = v38;
  v34 = v39;
  if ( !v37 )
  {
    v46 = v34;
    v45 = v33;
    v40[0] = &v45;
    v40[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v26 = &xmmword_16000;
    v27 = 1LL;
    v28 = (__int64 **)v40;
    v29 = 1uLL;
    std::io::stdio::_print(&v26);
    core::ptr::drop_in_place<alloc::string::String>(&v45, v18, v19, v20, v21, v22, v25, v26, v27);
    goto LABEL_4;
  }
  result = (unsigned __int64)v34;
  v24 = v30;
  v30[2] = v34;
  *v24 = v33;
  return result;
}
