__int64 __fastcall uu_od::odfunc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+48h] [rbp-230h]
  char has_error; // [rsp+67h] [rbp-211h]
  __int64 v11; // [rsp+78h] [rbp-200h]
  unsigned __int64 v13; // [rsp+98h] [rbp-1E0h]
  __int64 v14; // [rsp+A0h] [rbp-1D8h]
  char v15; // [rsp+B7h] [rbp-1C1h]
  _BYTE v16[24]; // [rsp+B8h] [rbp-1C0h] BYREF
  __int128 v17; // [rsp+D0h] [rbp-1A8h] BYREF
  __int128 v18; // [rsp+E0h] [rbp-198h]
  _OWORD v19[2]; // [rsp+F0h] [rbp-188h] BYREF
  __int64 v20; // [rsp+118h] [rbp-160h]
  _QWORD v21[2]; // [rsp+120h] [rbp-158h] BYREF
  _QWORD v22[2]; // [rsp+130h] [rbp-148h] BYREF
  _BYTE v23[48]; // [rsp+140h] [rbp-138h] BYREF
  _BYTE v24[24]; // [rsp+170h] [rbp-108h] BYREF
  __int64 v25; // [rsp+188h] [rbp-F0h] BYREF
  _BYTE v26[48]; // [rsp+190h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+1C0h] [rbp-B8h] BYREF
  __int128 v28; // [rsp+1D0h] [rbp-A8h]
  _QWORD v29[2]; // [rsp+1E0h] [rbp-98h] BYREF
  _BYTE v30[48]; // [rsp+1F0h] [rbp-88h] BYREF
  __int128 v31; // [rsp+220h] [rbp-58h] BYREF
  __int128 v32; // [rsp+238h] [rbp-40h]
  _QWORD *v33; // [rsp+258h] [rbp-20h]
  __int64 (__fastcall *v34)(); // [rsp+260h] [rbp-18h]
  __int64 *v35; // [rsp+268h] [rbp-10h]
  __int64 (__fastcall *v36)(); // [rsp+270h] [rbp-8h]

  v15 = 0;
  alloc::vec::Vec<T>::new(v16);
  v13 = *(_QWORD *)(a3 + 24);
  while ( 1 )
  {
    uu_od::inputdecoder::InputDecoder<I>::peek_read((__int64)&v17, a2);
    if ( BYTE8(v18) == 3 )
    {
      v25 = v17;
      v29[0] = uucore::util_name();
      v29[1] = v8;
      v33 = v29;
      v34 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v28 = v29;
      *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
      v27 = v28;
      core::fmt::Arguments::new_v1(v26, &unk_129868, &v27);
      std::io::stdio::_eprint(v26);
      v35 = &v25;
      v36 = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v32 = &v25;
      *((_QWORD *)&v32 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
      v31 = v32;
      core::fmt::Arguments::new_v1(v30, &unk_129888, &v31);
      std::io::stdio::_eprint(v30);
      uu_od::inputoffset::InputOffset::print_final_offset(a1);
      v14 = <T as core::convert::Into<U>>::into(1LL, &off_1298A8);
      core::ptr::drop_in_place<std::io::error::Error>(&v25);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v16);
      return v14;
    }
    v19[1] = v18;
    v19[0] = v17;
    v11 = uu_od::inputdecoder::MemoryDecoder::length(v19);
    if ( !v11 )
      break;
    if ( v11 != v13 )
    {
      v9 = *(_QWORD *)(a3 + 40) + v11;
      if ( __CFADD__(*(_QWORD *)(a3 + 40), v11) )
        core::panicking::panic_const::panic_const_add_overflow(&off_129828);
      v20 = *(_QWORD *)(a3 + 40) + v11;
      if ( v9 > v13 )
        v20 = v13;
      uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(v19, v11, v20);
    }
    if ( (*(_BYTE *)(a3 + 48) & 1) == 0
      && v11 == v13
      && (v21[0] = uu_od::inputdecoder::MemoryDecoder::get_buffer(v19, 0LL),
          v21[1] = v4,
          v22[0] = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(v16, &off_129840),
          v22[1] = v5,
          (core::cmp::impls::<impl core::cmp::PartialEq<&B> for &A>::eq(v21, v22) & 1) != 0) )
    {
      if ( (v15 & 1) == 0 )
      {
        v15 = 1;
        core::fmt::Arguments::new_const(v23, &off_129858);
        std::io::stdio::_print(v23);
      }
    }
    else
    {
      v15 = 0;
      if ( v11 == v13 )
        uu_od::inputdecoder::MemoryDecoder::clone_buffer(v19, v16);
      uu_od::inputoffset::InputOffset::format_byte_offset(v24, a1);
      v6 = <alloc::string::String as core::ops::deref::Deref>::deref(v24);
      uu_od::print_bytes(v6, v7, v19, a3);
      core::ptr::drop_in_place<alloc::string::String>(v24);
    }
    uu_od::inputoffset::InputOffset::increase_position(a1, v11);
  }
  uu_od::inputoffset::InputOffset::print_final_offset(a1);
  has_error = <uu_od::inputdecoder::InputDecoder<I> as uu_od::multifilereader::HasError>::has_error(a2);
  if ( (has_error & 1) != 0 )
    v14 = <T as core::convert::Into<U>>::into(1LL, &off_129810);
  else
    v14 = 0LL;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v16);
  return v14;
}
