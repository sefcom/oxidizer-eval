__int64 __fastcall uu_od::odfunc(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  unsigned __int64 v5; // r14
  char v6; // bp
  __int64 v7; // r13
  __int64 buffer; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int128 v11; // rax
  __int64 v12; // rbx
  char v14; // [rsp+7h] [rbp-E1h]
  __int64 v15; // [rsp+8h] [rbp-E0h] BYREF
  char **v16; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+18h] [rbp-D0h]
  _QWORD *v18; // [rsp+20h] [rbp-C8h]
  __int128 v19; // [rsp+28h] [rbp-C0h]
  _OWORD v20[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-80h] BYREF
  __int64 v22; // [rsp+70h] [rbp-78h]
  __int64 v23; // [rsp+78h] [rbp-70h]
  __int64 v24; // [rsp+80h] [rbp-68h]
  _QWORD v25[2]; // [rsp+88h] [rbp-60h] BYREF
  __int128 v26; // [rsp+98h] [rbp-50h] BYREF
  __int128 v27; // [rsp+A8h] [rbp-40h]

  v21 = 0LL;
  v22 = 1LL;
  v23 = 0LL;
  v5 = *(_QWORD *)(a3 + 24);
  v24 = *(_QWORD *)(a3 + 40);
  v14 = *(_BYTE *)(a3 + 48);
  v6 = 0;
  while ( 1 )
  {
    uu_od::inputdecoder::InputDecoder<I>::peek_read((__int64)&v26, a2);
    if ( BYTE8(v27) == 3 )
    {
      v15 = v26;
      *(_QWORD *)&v11 = uucore::util_name(a4);
      v20[0] = v11;
      v25[0] = v20;
      v25[1] = <&T as core::fmt::Display>::fmt;
      v16 = (char **)&unk_13E9B8;
      v17 = 2LL;
      v18 = v25;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      *(_QWORD *)&v20[0] = &v15;
      *((_QWORD *)&v20[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v16 = (char **)&unk_13E9D8;
      v17 = 2LL;
      v18 = v20;
      v19 = 1uLL;
      std::io::stdio::_eprint(&v16);
      uu_od::inputoffset::InputOffset::print_final_offset((__int64)a1);
      v12 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      core::ptr::drop_in_place<std::io::error::Error>(v15);
      goto LABEL_20;
    }
    a4 = *(double *)&v26;
    v20[0] = v26;
    v20[1] = v27;
    v7 = *((_QWORD *)&v26 + 1);
    if ( !*((_QWORD *)&v26 + 1) )
      break;
    if ( *((_QWORD *)&v26 + 1) != v5 )
    {
      v10 = v24 + *((_QWORD *)&v26 + 1);
      if ( v24 + *((_QWORD *)&v26 + 1) >= v5 )
        v10 = v5;
      uu_od::inputdecoder::MemoryDecoder::zero_out_buffer((__int64 *)v20, *((unsigned __int64 *)&v26 + 1), v10);
      goto LABEL_13;
    }
    if ( v14
      || (buffer = uu_od::inputdecoder::MemoryDecoder::get_buffer(v20, 0LL),
          !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(buffer, v9, v22, v23)) )
    {
      uu_od::inputdecoder::MemoryDecoder::clone_buffer(v20, (__int64)&v21);
LABEL_13:
      uu_od::inputoffset::InputOffset::format_byte_offset(&v16, a1);
      uu_od::print_bytes(v17, (__int64)v18, (unsigned __int8 *)v20, (_QWORD *)a3);
      core::ptr::drop_in_place<alloc::string::String>(&v16);
      v6 = 0;
      goto LABEL_14;
    }
    if ( (v6 & 1) == 0 )
    {
      v16 = &off_13E9A8;
      v17 = 1LL;
      v18 = (_QWORD *)&byte_8;
      a4 = 0.0;
      v19 = 0LL;
      std::io::stdio::_print(&v16);
      v6 = 1;
    }
LABEL_14:
    a1[2] += v7;
    if ( *a1 )
    {
      *a1 = 1LL;
      a1[1] += v7;
    }
  }
  uu_od::inputoffset::InputOffset::print_final_offset((__int64)a1);
  if ( (unsigned __int8)<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(*(_QWORD *)(a2 + 24)) )
    v12 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
  else
    v12 = 0LL;
LABEL_20:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21);
  return v12;
}
