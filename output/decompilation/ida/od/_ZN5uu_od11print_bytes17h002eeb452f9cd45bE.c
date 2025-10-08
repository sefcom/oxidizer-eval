__int64 __fastcall uu_od::print_bytes(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  int v8; // ecx
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int8 v12; // al
  void (__fastcall *v13)(char ***); // r15
  __int64 uint; // rax
  __int64 full_buffer; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 buffer; // rax
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  unsigned __int64 v21; // rax
  char **v22; // rsi
  unsigned __int8 v23; // [rsp+7h] [rbp-111h]
  char **v24; // [rsp+8h] [rbp-110h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+10h] [rbp-108h]
  __int64 **v26; // [rsp+18h] [rbp-100h]
  __int128 v27; // [rsp+20h] [rbp-F8h]
  __int64 v28; // [rsp+30h] [rbp-E8h]
  int v29; // [rsp+3Ch] [rbp-DCh]
  __int64 *v30; // [rsp+40h] [rbp-D8h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+48h] [rbp-D0h]
  char ***v32; // [rsp+50h] [rbp-C8h]
  __int64 v33; // [rsp+58h] [rbp-C0h]
  void *v34; // [rsp+60h] [rbp-B8h]
  __int64 v35; // [rsp+68h] [rbp-B0h]
  _QWORD *v36; // [rsp+70h] [rbp-A8h]
  __int64 v37; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+80h] [rbp-98h]
  __int64 v39; // [rsp+88h] [rbp-90h] BYREF
  __int64 v40; // [rsp+90h] [rbp-88h]
  __int64 v41; // [rsp+98h] [rbp-80h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-78h]
  __int64 v43; // [rsp+A8h] [rbp-70h]
  _QWORD v44[3]; // [rsp+B0h] [rbp-68h] BYREF
  __int16 v45; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v46; // [rsp+D0h] [rbp-48h]
  __int64 v47; // [rsp+D8h] [rbp-40h]
  __int64 v48; // [rsp+E0h] [rbp-38h]

  v36 = a3;
  v39 = a1;
  v40 = a2;
  result = a4[2];
  if ( result )
  {
    v5 = a4[1];
    v47 = v5 + 104 * result;
    v6 = v5 + 104;
    v37 = *v36;
    v38 = v36[1];
    v46 = a4[4];
    v7 = a4[5];
    v23 = *((_BYTE *)v36 + 24);
    v8 = v23;
    LOBYTE(v8) = 1;
    v29 = v8;
    while ( 1 )
    {
      v48 = v6;
      v41 = 0LL;
      v42 = 1LL;
      v43 = 0LL;
      if ( v38 )
        break;
LABEL_18:
      if ( *(_BYTE *)(v5 + 96) )
      {
        v16 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v42, v42 + v43);
        v17 = v46 - v16;
        if ( v46 < v16 )
          v17 = 0LL;
        buffer = uu_od::inputdecoder::MemoryDecoder::get_buffer(v36, 0LL);
        uu_od::prn_char::format_ascii_dump((__int64)v44, buffer, v19);
        if ( v17 > 0xFFFF )
        {
          v24 = &off_1038D8;
          v25 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v26 = (__int64 **)&byte_8;
          v27 = 0LL;
          core::panicking::panic_fmt(&v24, &off_103A70);
        }
        v24 = (char **)&unk_1A940;
        v25 = <&T as core::fmt::Display>::fmt;
        v26 = (__int64 **)v44;
        *(_QWORD *)&v27 = <alloc::string::String as core::fmt::Display>::fmt;
        *((_QWORD *)&v27 + 1) = 0LL;
        LOWORD(v28) = v17;
        v30 = (__int64 *)&unk_103A20;
        v31 = (__int64 (__fastcall *)())(&dword_0 + 2);
        v34 = &unk_1DF20;
        v35 = 2LL;
        v32 = &v24;
        v33 = 3LL;
        v20 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v41, &v30);
        core::result::Result<T,E>::unwrap(v20, &off_103A40);
        core::ptr::drop_in_place<alloc::string::String>(v44);
      }
      if ( (v29 & 1) != 0 )
      {
        v30 = &v39;
        v31 = <&T as core::fmt::Display>::fmt;
        v24 = (char **)&unk_1A940;
        v25 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v26 = &v30;
        v27 = 1uLL;
        std::io::stdio::_print(&v24);
      }
      else
      {
        v21 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v39, v39 + v40);
        if ( v21 > 0xFFFF )
        {
          v22 = &off_103A58;
          goto LABEL_31;
        }
        v30 = (__int64 *)&unk_1A940;
        v31 = <&T as core::fmt::Display>::fmt;
        v32 = 0LL;
        LOWORD(v33) = v21;
        v24 = (char **)&unk_1A940;
        v25 = (__int64 (__fastcall *)())(&dword_0 + 1);
        *((_QWORD *)&v27 + 1) = &unk_1D2A8;
        v28 = 1LL;
        v26 = &v30;
        *(_QWORD *)&v27 = 2LL;
        std::io::stdio::_print(&v24);
      }
      v30 = &v41;
      v31 = <alloc::string::String as core::fmt::Display>::fmt;
      v24 = (char **)&unk_102418;
      v25 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v26 = &v30;
      v27 = 1uLL;
      std::io::stdio::_print(&v24);
      core::ptr::drop_in_place<alloc::string::String>(&v41);
      v6 = v48 + 104;
      v29 = 0;
      v5 = v48;
      if ( v48 == v47 )
        return v48;
    }
    if ( !v7 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_103A88);
    v9 = 0LL;
    while ( 1 )
    {
      if ( (v7 | v9) >> 32 )
      {
        v10 = v9 % v7;
        if ( v9 % v7 >= 8 )
          goto LABEL_34;
      }
      else
      {
        v10 = (unsigned int)v9 % (unsigned int)v7;
        if ( (unsigned int)v10 >= 8uLL )
LABEL_34:
          core::panicking::panic_bounds_check(v10, 8LL, &off_103AA0);
      }
      v11 = *(_QWORD *)(v5 + 8 * v10 + 32);
      if ( v11 > 0xFFFF )
        break;
      v44[0] = &unk_1A940;
      v44[1] = <&T as core::fmt::Display>::fmt;
      v44[2] = 0LL;
      v45 = v11;
      v30 = (__int64 *)&unk_1A940;
      v31 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v34 = &unk_1D2A8;
      v35 = 1LL;
      v32 = (char ***)v44;
      v33 = 2LL;
      v12 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v41, &v30);
      core::result::Result<T,E>::unwrap(v12, &off_103AB8);
      v13 = *(void (__fastcall **)(char ***))(v5 + 8);
      if ( *(_QWORD *)v5 )
      {
        if ( (unsigned int)*(_QWORD *)v5 == 1 )
        {
          uu_od::inputdecoder::MemoryDecoder::read_float(v37, v23, v9, *(_QWORD *)(v5 + 16));
          v13(&v24);
        }
        else
        {
          full_buffer = uu_od::inputdecoder::MemoryDecoder::get_full_buffer(v36, v9);
          ((void (__fastcall *)(char ***, __int64))v13)(&v24, full_buffer);
        }
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v41,
          v25,
          (char *)v26 + (_QWORD)v25);
      }
      else
      {
        uint = uu_od::inputdecoder::MemoryDecoder::read_uint(v37, v23, v9, *(_QWORD *)(v5 + 16));
        ((void (__fastcall *)(char ***, __int64))v13)(&v24, uint);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v41,
          v25,
          (char *)v26 + (_QWORD)v25);
      }
      core::ptr::drop_in_place<alloc::string::String>(&v24);
      v9 += *(_QWORD *)(v5 + 16);
      if ( v9 >= v38 )
        goto LABEL_18;
    }
    v22 = &off_103AD0;
LABEL_31:
    v24 = &off_1038D8;
    v25 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v26 = (__int64 **)&byte_8;
    v27 = 0LL;
    core::panicking::panic_fmt(&v24, v22);
  }
  return result;
}