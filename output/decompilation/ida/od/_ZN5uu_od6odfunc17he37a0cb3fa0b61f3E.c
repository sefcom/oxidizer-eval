__int64 __fastcall uu_od::odfunc(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  char v4; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  __int64 buffer; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int128 v10; // rax
  __int64 v11; // rbx
  char v13; // [rsp+Fh] [rbp-E9h]
  __int64 v14; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-E0h]
  __int64 v16; // [rsp+20h] [rbp-D8h]
  __int64 v17; // [rsp+28h] [rbp-D0h] BYREF
  char **v18; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C0h]
  _QWORD *v20; // [rsp+40h] [rbp-B8h]
  __int128 v21; // [rsp+48h] [rbp-B0h]
  _OWORD v22[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v23; // [rsp+88h] [rbp-70h]
  __int64 v24; // [rsp+90h] [rbp-68h]
  _QWORD v25[2]; // [rsp+98h] [rbp-60h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v27; // [rsp+B8h] [rbp-40h]

  v14 = 0LL;
  v15 = 1LL;
  v16 = 0LL;
  v3 = *(_QWORD *)(a3 + 24);
  v23 = *(_QWORD *)(a3 + 40);
  v24 = a3;
  v13 = *(_BYTE *)(a3 + 48);
  v4 = 0;
  while ( 1 )
  {
    uu_od::inputdecoder::InputDecoder<I>::peek_read((__int64)&v26, a2);
    if ( BYTE8(v27) == 3 )
    {
      v17 = v26;
      *(_QWORD *)&v10 = uucore::util_name();
      v22[0] = v10;
      v25[0] = v22;
      v25[1] = <&T as core::fmt::Display>::fmt;
      v18 = (char **)&unk_1014F0;
      v19 = 2LL;
      v20 = v25;
      v21 = 1uLL;
      std::io::stdio::_eprint(&v18);
      *(_QWORD *)&v22[0] = &v17;
      *((_QWORD *)&v22[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v18 = (char **)&unk_101510;
      v19 = 2LL;
      v20 = v22;
      v21 = 1uLL;
      std::io::stdio::_eprint(&v18);
      uu_od::inputoffset::InputOffset::print_final_offset(a1);
      v11 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
      core::ptr::drop_in_place<std::io::error::Error>(v17);
      goto LABEL_23;
    }
    v22[0] = v26;
    v22[1] = v27;
    v5 = *((_QWORD *)&v26 + 1);
    if ( !*((_QWORD *)&v26 + 1) )
      break;
    if ( *((_QWORD *)&v26 + 1) != v3 )
    {
      v6 = v23 + *((_QWORD *)&v26 + 1);
      if ( v23 + *((_QWORD *)&v26 + 1) >= v3 )
        v6 = v3;
      uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(v22, *((_QWORD *)&v26 + 1), v6);
    }
    if ( v5 == v3
      && (v13 & 1) == 0
      && (buffer = uu_od::inputdecoder::MemoryDecoder::get_buffer(v22, 0LL),
          (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(buffer, v8, v15, v16)) )
    {
      if ( (v4 & 1) == 0 )
      {
        v18 = &off_1014E0;
        v19 = 1LL;
        v20 = (_QWORD *)&byte_8;
        v21 = 0LL;
        std::io::stdio::_print(&v18);
      }
      v4 = 1;
      *(_QWORD *)(a1 + 16) += v5;
      if ( (*(_BYTE *)a1 & 1) != 0 )
        goto LABEL_18;
    }
    else
    {
      if ( v5 == v3 )
        uu_od::inputdecoder::MemoryDecoder::clone_buffer(v22, &v14);
      uu_od::inputoffset::InputOffset::format_byte_offset(&v18, a1);
      v9 = v19;
      uu_od::print_bytes(v19, v20, v22, v24);
      core::ptr::drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<std::io::buffered::bufreader::BufReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>>(
        v18,
        v9);
      v4 = 0;
      *(_QWORD *)(a1 + 16) += v5;
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
LABEL_18:
        *(_QWORD *)a1 = 1LL;
        *(_QWORD *)(a1 + 8) += v5;
      }
    }
  }
  uu_od::inputoffset::InputOffset::print_final_offset(a1);
  if ( (unsigned __int8)<uu_od::peekreader::PeekReader<R> as uu_od::multifilereader::HasError>::has_error(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 96LL)) )
    v11 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
  else
    v11 = 0LL;
LABEL_23:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v15);
  return v11;
}