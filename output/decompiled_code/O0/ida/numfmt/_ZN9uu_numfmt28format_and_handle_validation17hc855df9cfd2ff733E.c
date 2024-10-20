_OWORD *__fastcall uu_numfmt::format_and_handle_validation(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *result; // rax
  __int128 v5; // xmm0
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // bp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v14; // [rsp+18h] [rbp-1D0h]
  __int128 v15; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-1B8h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-1B0h] BYREF
  __m256i v18; // [rsp+48h] [rbp-1A0h]
  __int64 v19; // [rsp+68h] [rbp-180h] BYREF
  __int128 v20; // [rsp+70h] [rbp-178h]
  __int64 v21; // [rsp+80h] [rbp-168h]
  _QWORD v22[2]; // [rsp+88h] [rbp-160h] BYREF
  _QWORD v23[2]; // [rsp+98h] [rbp-150h] BYREF
  _QWORD v24[2]; // [rsp+A8h] [rbp-140h] BYREF
  _QWORD v25[2]; // [rsp+B8h] [rbp-130h] BYREF
  _QWORD v26[2]; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-108h]
  __int64 v29; // [rsp+E8h] [rbp-100h]
  _QWORD v30[4]; // [rsp+F0h] [rbp-F8h] BYREF
  _QWORD v31[6]; // [rsp+110h] [rbp-D8h] BYREF
  _QWORD v32[6]; // [rsp+140h] [rbp-A8h] BYREF
  _QWORD v33[6]; // [rsp+170h] [rbp-78h] BYREF
  _QWORD v34[9]; // [rsp+1A0h] [rbp-48h] BYREF

  v17[0] = a1;
  v17[1] = a2;
  if ( *(_QWORD *)(a3 + 112) == 0x8000000000000000LL )
  {
    uu_numfmt::format::format_and_print_whitespace(&v13, a1, a2, a3);
    if ( (_QWORD)v13 == 0x8000000000000000LL )
      return 0LL;
  }
  else
  {
    uu_numfmt::format::format_and_print_delimited(&v13, a1, a2, a3);
    if ( (_QWORD)v13 == 0x8000000000000000LL )
      return 0LL;
  }
  v16 = v14;
  v15 = v13;
  switch ( *(_BYTE *)(a3 + 200) )
  {
    case 0:
      v18.m256i_i64[3] = v14;
      *(_OWORD *)&v18.m256i_u64[1] = v13;
      v18.m256i_i64[0] = 2LL;
      result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !result )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v5 = *(_OWORD *)v18.m256i_i8;
      result[1] = *(_OWORD *)&v18.m256i_u64[2];
      *result = v5;
      return result;
    case 1:
      v21 = v14;
      v20 = v13;
      v19 = 2LL;
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 2);
      v10 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v11 = *(_QWORD *)(v10 + 8);
      if ( !v11 )
        goto LABEL_20;
      v12 = *(_QWORD *)(v10 + 16);
      if ( v12 < 0 )
        goto LABEL_20;
      v22[0] = v11;
      v22[1] = v12;
      v30[0] = v22;
      v30[1] = <&T as core::fmt::Display>::fmt;
      v30[2] = &v19;
      v30[3] = <uu_numfmt::errors::NumfmtError as core::fmt::Display>::fmt;
      v31[0] = &unk_11EE98;
      v31[1] = 3LL;
      v31[4] = 0LL;
      v31[2] = v30;
      v31[3] = 2LL;
      std::io::stdio::_eprint(v31);
      v9 = 1;
      core::ptr::drop_in_place<uu_numfmt::errors::NumfmtError>(&v19);
      goto LABEL_15;
    case 2:
      v6 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v7 = *(_QWORD *)(v6 + 8);
      if ( !v7 || (v8 = *(_QWORD *)(v6 + 16), v8 < 0) )
LABEL_20:
        core::panicking::panic_nounwind(anon_983ba386f48605eb6a2f271d0cb174c9_11_llvm_2613378195564442977, 162LL);
      v24[0] = v7;
      v24[1] = v8;
      v23[0] = v24;
      v23[1] = <&T as core::fmt::Display>::fmt;
      v32[0] = &unk_11EEC8;
      v32[1] = 2LL;
      v32[4] = 0LL;
      v32[2] = v23;
      v32[3] = 1LL;
      std::io::stdio::_eprint(v32);
      v25[0] = &v15;
      v25[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v33[0] = &unk_11EEE8;
      v33[1] = 2LL;
      v33[4] = 0LL;
      v33[2] = v25;
      v33[3] = 1LL;
      std::io::stdio::_eprint(v33);
      goto LABEL_11;
    case 3:
LABEL_11:
      v9 = 0;
LABEL_15:
      v26[0] = v17;
      v26[1] = <&T as core::fmt::Display>::fmt;
      v34[0] = &unk_11EEE8;
      v34[1] = 2LL;
      v34[4] = 0LL;
      v34[2] = v26;
      v34[3] = 1LL;
      std::io::stdio::_print(v34);
      if ( !v9 )
      {
        alloc::raw_vec::RawVec<T,A>::current_memory(&v27, &v15);
        if ( v28 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v16, v27, v28, v29);
      }
      break;
  }
  return 0LL;
}
