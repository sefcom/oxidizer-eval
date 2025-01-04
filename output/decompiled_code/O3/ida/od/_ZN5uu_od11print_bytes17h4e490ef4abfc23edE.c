__int64 __fastcall uu_od::print_bytes(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned __int64 i; // r15
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  unsigned __int8 v12; // al
  void (__fastcall *v13)(__int128 **, __int64); // r12
  __int64 v14; // rax
  __int64 full_buffer; // rax
  __int64 slice; // rax
  __int64 uint; // rax
  unsigned __int64 v18; // rax
  __int128 **v19; // r15
  __int64 buffer; // rax
  unsigned __int8 v21; // al
  __int64 v22; // rax
  char v24; // [rsp+14h] [rbp-164h]
  __int128 *v25; // [rsp+18h] [rbp-160h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+20h] [rbp-158h]
  __int128 **v27; // [rsp+28h] [rbp-150h]
  __int64 (__fastcall *v28)(); // [rsp+30h] [rbp-148h]
  __int128 **v29; // [rsp+38h] [rbp-140h]
  __int64 v30; // [rsp+40h] [rbp-138h]
  __int128 *v31; // [rsp+48h] [rbp-130h] BYREF
  __int64 v32; // [rsp+50h] [rbp-128h]
  __int128 **v33; // [rsp+58h] [rbp-120h]
  __int64 v34; // [rsp+60h] [rbp-118h]
  __int64 v35; // [rsp+68h] [rbp-110h]
  __int64 v36; // [rsp+70h] [rbp-108h]
  char v37; // [rsp+78h] [rbp-100h]
  __int64 v38; // [rsp+80h] [rbp-F8h]
  __int64 v39; // [rsp+90h] [rbp-E8h]
  __int64 v40; // [rsp+A0h] [rbp-D8h]
  __int64 v41; // [rsp+A8h] [rbp-D0h]
  char v42; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v43; // [rsp+B8h] [rbp-C0h]
  __int128 *v44; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+C8h] [rbp-B0h]
  _QWORD *v46; // [rsp+D0h] [rbp-A8h]
  __int64 v47; // [rsp+D8h] [rbp-A0h]
  __int128 **v48; // [rsp+E0h] [rbp-98h]
  __int64 v49; // [rsp+E8h] [rbp-90h]
  __int64 v50; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-80h]
  __int64 v52; // [rsp+100h] [rbp-78h] BYREF
  __int64 v53; // [rsp+108h] [rbp-70h]
  __int64 v54; // [rsp+110h] [rbp-68h]
  unsigned __int64 v55; // [rsp+118h] [rbp-60h]
  _QWORD v56[2]; // [rsp+120h] [rbp-58h] BYREF
  _BYTE v57[72]; // [rsp+130h] [rbp-48h] BYREF

  v50 = a1;
  v51 = a2;
  v5 = 104LL * a4[2];
  v56[0] = a4[1];
  v56[1] = v56[0] + v5;
  result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v56);
  if ( result )
  {
    v7 = result;
    v43 = *(_QWORD *)(a3 + 8);
    v55 = a4[4];
    v8 = a4[5];
    v24 = 1;
    do
    {
      v52 = 0LL;
      v53 = 1LL;
      v54 = 0LL;
      if ( v43 )
      {
        if ( !v8 )
          core::panicking::panic_const::panic_const_rem_by_zero(&off_1417F0);
        for ( i = 0LL; i < v43; i += *(_QWORD *)(v7 + 16) )
        {
          if ( (v8 | i) >> 32 )
          {
            v10 = i % v8;
            if ( i % v8 >= 8 )
              goto LABEL_26;
          }
          else
          {
            v10 = (unsigned int)i % (unsigned int)v8;
            if ( (unsigned int)v10 >= 8uLL )
LABEL_26:
              core::panicking::panic_bounds_check(v10, 8LL, &off_141808);
          }
          v11 = *(_QWORD **)(v7 + 8 * v10 + 32);
          v44 = &xmmword_DAD0;
          v45 = <&T as core::fmt::Display>::fmt;
          v46 = v11;
          v47 = 0LL;
          v31 = (_OWORD *)(&dword_0 + 2);
          v33 = (__int128 **)(&dword_0 + 1);
          v34 = 1LL;
          v35 = 0LL;
          v36 = 32LL;
          v37 = 1;
          v25 = &xmmword_DAD0;
          v26 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v29 = &v31;
          v30 = 1LL;
          v27 = &v44;
          v28 = (__int64 (__fastcall *)())(&dword_0 + 2);
          v12 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v52, &v25);
          core::result::Result<T,E>::unwrap(v12, &off_141820);
          v13 = *(void (__fastcall **)(__int128 **, __int64))(v7 + 8);
          if ( *(_QWORD *)v7 == 2LL )
          {
            full_buffer = uu_od::inputdecoder::MemoryDecoder::get_full_buffer(a3, i);
            v13(&v31, full_buffer);
            slice = core::slice::iter::Iter<T>::make_slice(v32, (char *)v33 + v32);
            alloc::vec::Vec<T,A>::append_elements(&v52, slice);
            core::ptr::drop_in_place<alloc::string::String>(&v31);
          }
          else
          {
            if ( (unsigned int)*(_QWORD *)v7 == 1 )
            {
              uu_od::inputdecoder::MemoryDecoder::read_float(a3, i, *(_QWORD *)(v7 + 16));
              ((void (__fastcall *)(__int128 **))v13)(&v31);
            }
            else
            {
              uint = uu_od::inputdecoder::MemoryDecoder::read_uint(a3, i, *(_QWORD *)(v7 + 16));
              v13(&v31, uint);
            }
            v14 = core::slice::iter::Iter<T>::make_slice(v32, (char *)v33 + v32);
            alloc::vec::Vec<T,A>::append_elements(&v52, v14);
            core::ptr::drop_in_place<alloc::string::String>(&v31);
          }
        }
      }
      if ( *(_BYTE *)(v7 + 96) )
      {
        v18 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v53, v53 + v54);
        v19 = (__int128 **)(v55 - v18);
        if ( v55 < v18 )
          v19 = 0LL;
        buffer = uu_od::inputdecoder::MemoryDecoder::get_buffer(a3, 0LL);
        uu_od::prn_char::format_ascii_dump(v57, buffer);
        v25 = &xmmword_DAD0;
        v26 = <&T as core::fmt::Display>::fmt;
        v27 = (__int128 **)v57;
        v28 = <alloc::string::String as core::fmt::Display>::fmt;
        v29 = v19;
        v30 = 0LL;
        v31 = (_OWORD *)(&dword_0 + 2);
        v33 = (__int128 **)(&dword_0 + 1);
        v34 = 2LL;
        v35 = 0LL;
        v36 = 32LL;
        v37 = 1;
        v38 = 2LL;
        v39 = 2LL;
        v40 = 1LL;
        v41 = 32LL;
        v42 = 3;
        v44 = (__int128 *)&unk_1417B8;
        v45 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v48 = &v31;
        v49 = 2LL;
        v46 = &v25;
        v47 = 3LL;
        v21 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v52, &v44);
        core::result::Result<T,E>::unwrap(v21, &off_1417D8);
        core::ptr::drop_in_place<alloc::string::String>(v57);
      }
      if ( (v24 & 1) != 0 )
      {
        v25 = (__int128 *)&v50;
        v26 = <&T as core::fmt::Display>::fmt;
        v31 = &xmmword_DAD0;
        v32 = 1LL;
        v35 = 0LL;
        v33 = &v25;
        v34 = 1LL;
        std::io::stdio::_print(&v31);
        v24 = 0;
      }
      else
      {
        v22 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v50, v50 + v51);
        v44 = &xmmword_DAD0;
        v45 = <&T as core::fmt::Display>::fmt;
        v46 = (_QWORD *)v22;
        v47 = 0LL;
        v31 = (_OWORD *)(&dword_0 + 2);
        v33 = (__int128 **)(&dword_0 + 1);
        v34 = 1LL;
        v35 = 0LL;
        v36 = 32LL;
        v37 = 1;
        v25 = &xmmword_DAD0;
        v26 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v29 = &v31;
        v30 = 1LL;
        v27 = &v44;
        v28 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_print(&v25);
      }
      v25 = (__int128 *)&v52;
      v26 = <alloc::string::String as core::fmt::Display>::fmt;
      v31 = (__int128 *)&unk_141798;
      v32 = 2LL;
      v35 = 0LL;
      v33 = &v25;
      v34 = 1LL;
      std::io::stdio::_print(&v31);
      core::ptr::drop_in_place<alloc::string::String>(&v52);
      result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v56);
      v7 = result;
    }
    while ( result );
  }
  return result;
}
