__int64 __fastcall uu_od::odfunc(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  char v5; // bp
  __int64 v6; // r13
  __int64 buffer; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int128 v10; // rax
  __int64 v11; // rbx
  char v13; // [rsp+7h] [rbp-E1h]
  __int64 v14; // [rsp+8h] [rbp-E0h] BYREF
  char **v15; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+18h] [rbp-D0h]
  _QWORD *v17; // [rsp+20h] [rbp-C8h]
  __int128 v18; // [rsp+28h] [rbp-C0h]
  _OWORD v19[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-80h] BYREF
  __int64 v21; // [rsp+70h] [rbp-78h]
  __int64 v22; // [rsp+78h] [rbp-70h]
  __int64 v23; // [rsp+80h] [rbp-68h]
  _QWORD v24[2]; // [rsp+88h] [rbp-60h] BYREF
  __int128 v25; // [rsp+98h] [rbp-50h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-40h]

  v20 = 0LL;
  v21 = 1LL;
  v22 = 0LL;
  v4 = *(_QWORD *)(a3 + 24);
  v23 = *(_QWORD *)(a3 + 40);
  v13 = *(_BYTE *)(a3 + 48);
  v5 = 0;
  while ( 1 )
  {
    uu_od::inputdecoder::InputDecoder<I>::peek_read((__int64)&v25, a2);
    if ( BYTE8(v26) == 3 )
    {
      v14 = v25;
      *(_QWORD *)&v10 = uucore::util_name();
      v19[0] = v10;
      v24[0] = v19;
      v24[1] = <&T as core::fmt::Display>::fmt;
      v15 = (char **)&unk_13E9B8;
      v16 = 2LL;
      v17 = v24;
      v18 = 1uLL;
      std::io::stdio::_eprint(&v15);
      *(_QWORD *)&v19[0] = &v14;
      *((_QWORD *)&v19[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v15 = (char **)&unk_13E9D8;
      v16 = 2LL;
      v17 = v19;
      v18 = 1uLL;
      std::io::stdio::_eprint(&v15);
      uu_od::inputoffset::InputOffset::print_final_offset((__int64)a1);
      v11 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      core::ptr::drop_in_place<std::io::error::Error>(v14);
      goto LABEL_20;
    }
    v19[0] = v25;
    v19[1] = v26;
    v6 = *((_QWORD *)&v25 + 1);
    if ( !*((_QWORD *)&v25 + 1) )
      break;
    if ( *((_QWORD *)&v25 + 1) != v4 )
    {
      v9 = v23 + *((_QWORD *)&v25 + 1);
      if ( v23 + *((_QWORD *)&v25 + 1) >= v4 )
        v9 = v4;
      uu_od::inputdecoder::MemoryDecoder::zero_out_buffer((__int64 *)v19, *((unsigned __int64 *)&v25 + 1), v9);
      goto LABEL_13;
    }
    if ( v13
      || (buffer = uu_od::inputdecoder::MemoryDecoder::get_buffer(v19, 0LL),
          !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(buffer, v8, v21, v22)) )
    {
      uu_od::inputdecoder::MemoryDecoder::clone_buffer(v19, (__int64)&v20);
LABEL_13:
      uu_od::inputoffset::InputOffset::format_byte_offset(&v15, a1);
      uu_od::print_bytes(v16, (__int64)v17, (__int64)v19, (_QWORD *)a3);
      core::ptr::drop_in_place<alloc::string::String>(&v15);
      v5 = 0;
      goto LABEL_14;
    }
    if ( (v5 & 1) == 0 )
    {
      v15 = &off_13E9A8;
      v16 = 1LL;
      v17 = (_QWORD *)&byte_8;
      v18 = 0LL;
      std::io::stdio::_print(&v15);
      v5 = 1;
    }
LABEL_14:
    a1[2] += v6;
    if ( *a1 )
    {
      *a1 = 1LL;
      a1[1] += v6;
    }
  }
  uu_od::inputoffset::InputOffset::print_final_offset((__int64)a1);
  if ( (unsigned __int8)<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(*(_QWORD *)(a2 + 24)) )
    v11 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
  else
    v11 = 0LL;
LABEL_20:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20);
  return v11;
}
