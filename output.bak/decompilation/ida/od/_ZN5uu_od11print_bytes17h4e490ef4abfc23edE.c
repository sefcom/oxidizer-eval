__int64 __fastcall uu_od::print_bytes(__int64 a1, __int64 a2, unsigned __int8 *a3, _QWORD *a4)
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
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 v23; // rax
  char v25; // [rsp+14h] [rbp-164h]
  __int128 *v26; // [rsp+18h] [rbp-160h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+20h] [rbp-158h]
  __int128 **v28; // [rsp+28h] [rbp-150h]
  __int64 (__fastcall *v29)(); // [rsp+30h] [rbp-148h]
  __int128 **v30; // [rsp+38h] [rbp-140h]
  __int64 v31; // [rsp+40h] [rbp-138h]
  __int128 *v32; // [rsp+48h] [rbp-130h] BYREF
  __int64 v33; // [rsp+50h] [rbp-128h]
  __int128 **v34; // [rsp+58h] [rbp-120h]
  __int64 v35; // [rsp+60h] [rbp-118h]
  __int64 v36; // [rsp+68h] [rbp-110h]
  __int64 v37; // [rsp+70h] [rbp-108h]
  char v38; // [rsp+78h] [rbp-100h]
  __int64 v39; // [rsp+80h] [rbp-F8h]
  __int64 v40; // [rsp+90h] [rbp-E8h]
  __int64 v41; // [rsp+A0h] [rbp-D8h]
  __int64 v42; // [rsp+A8h] [rbp-D0h]
  char v43; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-C0h]
  __int128 *v45; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+C8h] [rbp-B0h]
  _QWORD *v47; // [rsp+D0h] [rbp-A8h]
  __int64 v48; // [rsp+D8h] [rbp-A0h]
  __int128 **v49; // [rsp+E0h] [rbp-98h]
  __int64 v50; // [rsp+E8h] [rbp-90h]
  __int64 v51; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-80h]
  __int64 v53; // [rsp+100h] [rbp-78h] BYREF
  __int64 v54; // [rsp+108h] [rbp-70h]
  __int64 v55; // [rsp+110h] [rbp-68h]
  unsigned __int64 v56; // [rsp+118h] [rbp-60h]
  _QWORD v57[2]; // [rsp+120h] [rbp-58h] BYREF
  _BYTE v58[72]; // [rsp+130h] [rbp-48h] BYREF

  v51 = a1;
  v52 = a2;
  v5 = 104LL * a4[2];
  v57[0] = a4[1];
  v57[1] = v57[0] + v5;
  result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v57);
  if ( result )
  {
    v7 = result;
    v44 = *((_QWORD *)a3 + 1);
    v56 = a4[4];
    v8 = a4[5];
    v25 = 1;
    do
    {
      v53 = 0LL;
      v54 = 1LL;
      v55 = 0LL;
      if ( v44 )
      {
        if ( !v8 )
          core::panicking::panic_const::panic_const_rem_by_zero(&off_1417F0);
        for ( i = 0LL; i < v44; i += *(_QWORD *)(v7 + 16) )
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
          v45 = &xmmword_DAD0;
          v46 = <&T as core::fmt::Display>::fmt;
          v47 = v11;
          v48 = 0LL;
          v32 = (_OWORD *)(&dword_0 + 2);
          v34 = (__int128 **)(&dword_0 + 1);
          v35 = 1LL;
          v36 = 0LL;
          v37 = 32LL;
          v38 = 1;
          v26 = &xmmword_DAD0;
          v27 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v30 = &v32;
          v31 = 1LL;
          v28 = &v45;
          v29 = (__int64 (__fastcall *)())(&dword_0 + 2);
          v12 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v53, &v26);
          core::result::Result<T,E>::unwrap(v12, &off_141820);
          v13 = *(void (__fastcall **)(__int128 **, __int64))(v7 + 8);
          if ( *(_QWORD *)v7 == 2LL )
          {
            full_buffer = uu_od::inputdecoder::MemoryDecoder::get_full_buffer(a3, i);
            v13(&v32, full_buffer);
            slice = core::slice::iter::Iter<T>::make_slice(v33, (char *)v34 + v33);
            alloc::vec::Vec<T,A>::append_elements(&v53, slice);
            core::ptr::drop_in_place<alloc::string::String>(&v32);
          }
          else
          {
            if ( (unsigned int)*(_QWORD *)v7 == 1 )
            {
              uu_od::inputdecoder::MemoryDecoder::read_float(a3, i, *(_QWORD *)(v7 + 16));
              ((void (__fastcall *)(__int128 **))v13)(&v32);
            }
            else
            {
              uint = uu_od::inputdecoder::MemoryDecoder::read_uint(a3, i, *(_QWORD *)(v7 + 16));
              v13(&v32, uint);
            }
            v14 = core::slice::iter::Iter<T>::make_slice(v33, (char *)v34 + v33);
            alloc::vec::Vec<T,A>::append_elements(&v53, v14);
            core::ptr::drop_in_place<alloc::string::String>(&v32);
          }
        }
      }
      if ( *(_BYTE *)(v7 + 96) )
      {
        v18 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v54, v54 + v55);
        v19 = (__int128 **)(v56 - v18);
        if ( v56 < v18 )
          v19 = 0LL;
        buffer = uu_od::inputdecoder::MemoryDecoder::get_buffer(a3, 0LL);
        uu_od::prn_char::format_ascii_dump((__int64)v58, buffer, v21);
        v26 = &xmmword_DAD0;
        v27 = <&T as core::fmt::Display>::fmt;
        v28 = (__int128 **)v58;
        v29 = <alloc::string::String as core::fmt::Display>::fmt;
        v30 = v19;
        v31 = 0LL;
        v32 = (_OWORD *)(&dword_0 + 2);
        v34 = (__int128 **)(&dword_0 + 1);
        v35 = 2LL;
        v36 = 0LL;
        v37 = 32LL;
        v38 = 1;
        v39 = 2LL;
        v40 = 2LL;
        v41 = 1LL;
        v42 = 32LL;
        v43 = 3;
        v45 = (__int128 *)&unk_1417B8;
        v46 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v49 = &v32;
        v50 = 2LL;
        v47 = &v26;
        v48 = 3LL;
        v22 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v53, &v45);
        core::result::Result<T,E>::unwrap(v22, &off_1417D8);
        core::ptr::drop_in_place<alloc::string::String>(v58);
      }
      if ( (v25 & 1) != 0 )
      {
        v26 = (__int128 *)&v51;
        v27 = <&T as core::fmt::Display>::fmt;
        v32 = &xmmword_DAD0;
        v33 = 1LL;
        v36 = 0LL;
        v34 = &v26;
        v35 = 1LL;
        std::io::stdio::_print(&v32);
        v25 = 0;
      }
      else
      {
        v23 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v51, v51 + v52);
        v45 = &xmmword_DAD0;
        v46 = <&T as core::fmt::Display>::fmt;
        v47 = (_QWORD *)v23;
        v48 = 0LL;
        v32 = (_OWORD *)(&dword_0 + 2);
        v34 = (__int128 **)(&dword_0 + 1);
        v35 = 1LL;
        v36 = 0LL;
        v37 = 32LL;
        v38 = 1;
        v26 = &xmmword_DAD0;
        v27 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v30 = &v32;
        v31 = 1LL;
        v28 = &v45;
        v29 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_print(&v26);
      }
      v26 = (__int128 *)&v53;
      v27 = <alloc::string::String as core::fmt::Display>::fmt;
      v32 = (__int128 *)&unk_141798;
      v33 = 2LL;
      v36 = 0LL;
      v34 = &v26;
      v35 = 1LL;
      std::io::stdio::_print(&v32);
      core::ptr::drop_in_place<alloc::string::String>(&v53);
      result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v57);
      v7 = result;
    }
    while ( result );
  }
  return result;
}
