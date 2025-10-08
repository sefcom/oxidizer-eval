unsigned __int64 __fastcall uu_numfmt::format::format_and_print_whitespace(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // cl
  bool v17; // zf
  int v18; // ecx
  unsigned __int64 result; // rax
  _OWORD *v20; // rcx
  char **v21; // r8
  char v22; // [rsp+Fh] [rbp-159h]
  void *v23; // [rsp+10h] [rbp-158h] BYREF
  __int64 v24; // [rsp+18h] [rbp-150h]
  __int128 **v25; // [rsp+20h] [rbp-148h]
  __int128 v26; // [rsp+28h] [rbp-140h]
  __int128 v27; // [rsp+40h] [rbp-128h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+50h] [rbp-118h]
  _QWORD *v29; // [rsp+60h] [rbp-108h]
  __int64 v30; // [rsp+68h] [rbp-100h] BYREF
  __int64 v31; // [rsp+70h] [rbp-F8h]
  __int64 v32; // [rsp+78h] [rbp-F0h]
  __int64 v33; // [rsp+80h] [rbp-E8h]
  __int64 v34; // [rsp+88h] [rbp-E0h]
  __int64 v35; // [rsp+90h] [rbp-D8h]
  unsigned __int64 v36; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-C8h]
  __int64 v38; // [rsp+A8h] [rbp-C0h]
  __int64 v39; // [rsp+B0h] [rbp-B8h]
  __int64 v40; // [rsp+B8h] [rbp-B0h]
  __int128 *v41; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-A0h]
  __int64 (__fastcall *v43)(); // [rsp+D8h] [rbp-90h]
  _QWORD v44[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-78h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+100h] [rbp-68h]
  _QWORD v47[12]; // [rsp+108h] [rbp-60h] BYREF

  v5 = a1;
  core::iter::traits::iterator::Iterator::zip(v47);
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v36, v47);
  v6 = v37;
  if ( v37 )
  {
    v29 = a1;
    v35 = *(_QWORD *)(a4 + 96);
    v34 = *(_QWORD *)(a4 + 104);
    v22 = *(_BYTE *)(a4 + 200);
    v33 = a4;
    v32 = *(_QWORD *)(a4 + 184);
    while ( 1 )
    {
      v7 = v36;
      v8 = v38;
      v9 = v39;
      v10 = v40;
      v30 = v39;
      v31 = v40;
      if ( (unsigned __int8)uucore::features::ranges::contain(v35, v34, v36) )
      {
        v11 = v8;
        if ( v7 > 1 )
        {
          v23 = &off_102540;
          v24 = 1LL;
          v25 = (__int128 **)&byte_8;
          v26 = 0LL;
          std::io::stdio::_print(&v23);
          if ( !core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                  1LL,
                  v6,
                  v8) )
          {
            v21 = &off_102568;
            goto LABEL_23;
          }
          v11 = v12;
          v9 = v30;
          v10 = v31;
        }
        uu_numfmt::format::format_string(&v41, v9, v10, v33, (v8 != 0) & (unsigned __int8)(v32 == 0), v10 + v11);
        v27 = v42;
        v28 = v43;
        if ( ((unsigned __int8)v41 & 1) != 0 )
        {
          result = (unsigned __int64)v28;
          v20 = v29;
          v29[2] = v28;
          *v20 = v27;
          return result;
        }
        v46 = v28;
        v45 = v27;
        v44[0] = &v45;
        v44[1] = <alloc::string::String as core::fmt::Display>::fmt;
        v23 = &unk_198C0;
        v24 = 1LL;
        v25 = (__int128 **)v44;
        v26 = 1uLL;
        std::io::stdio::_print(&v23);
        core::ptr::drop_in_place<alloc::string::String>(&v45);
      }
      else
      {
        if ( (v22 & 1) != 0 )
        {
          LODWORD(v23) = 0;
          v13 = core::char::methods::encode_utf8_raw(10LL, &v23);
          if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v6, v8, v13) )
          {
            v23 = &off_102540;
            v24 = 1LL;
            v25 = (__int128 **)&byte_8;
            v26 = 0LL;
            std::io::stdio::_print(&v23);
            v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                    1LL,
                    v6,
                    v8);
            if ( !v14 )
            {
              v21 = &off_102550;
LABEL_23:
              core::str::slice_error_fail(v6, v8, 1LL, v8, v21);
            }
            v6 = v14;
            v8 = v15;
          }
        }
        *(_QWORD *)&v27 = v6;
        *((_QWORD *)&v27 + 1) = v8;
        v41 = &v27;
        *(_QWORD *)&v42 = <&T as core::fmt::Display>::fmt;
        *((_QWORD *)&v42 + 1) = &v30;
        v43 = <&T as core::fmt::Display>::fmt;
        v23 = &unk_195A0;
        v24 = 2LL;
        v25 = &v41;
        v26 = 2uLL;
        std::io::stdio::_print(&v23);
      }
      <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v36, v47);
      v6 = v37;
      if ( !v37 )
      {
        v5 = v29;
        v16 = v22;
        goto LABEL_17;
      }
    }
  }
  v16 = *(_BYTE *)(a4 + 200);
LABEL_17:
  v17 = (v16 & 1) == 0;
  v18 = 10;
  if ( !v17 )
    v18 = 0;
  LODWORD(v36) = v18;
  v47[0] = &v36;
  v47[1] = <char as core::fmt::Display>::fmt;
  v23 = &unk_198C0;
  v24 = 1LL;
  v25 = (__int128 **)v47;
  v26 = 1uLL;
  std::io::stdio::_print(&v23);
  result = 0x8000000000000000LL;
  *v5 = 0x8000000000000000LL;
  return result;
}