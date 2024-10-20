        __int64 a6)
{
  __int64 v6; // rax
  _OWORD *v7; // rax
  _OWORD *v8; // r14
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v12; // [rsp+0h] [rbp-108h] BYREF
  __int128 v13; // [rsp+10h] [rbp-F8h]
  __int64 v14; // [rsp+20h] [rbp-E8h]
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  __int128 v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v21[4]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-58h]
  __int128 v24; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-28h]

  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v6 = uucore::mods::error::USimpleError::new(125LL, aNoTerminatingQ, 33LL);
      goto LABEL_12;
    case 1:
      v6 = uucore::mods::error::USimpleError::new(125LL, aInvalidBacksla, 40LL);
      goto LABEL_12;
    case 2:
      v6 = uucore::mods::error::USimpleError::new(125LL, aCMustNotAppear, 47LL);
LABEL_12:
      v8 = (_OWORD *)v6;
      if ( *(_DWORD *)a1 == 4 )
        goto LABEL_13;
      goto LABEL_17;
    case 3:
      v15 = *(_DWORD *)(a1 + 4);
      v19[0] = &v15;
      v19[1] = <char as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &off_138DC0;
      *((_QWORD *)&v12 + 1) = 2LL;
      *(_QWORD *)&v13 = v19;
      *((_QWORD *)&v13 + 1) = 1LL;
      v14 = 0LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
        &v22,
        &v12,
        a3,
        a4,
        a5,
        a6);
      *(_QWORD *)&v13 = v23;
      v12 = v22;
      DWORD2(v13) = 125;
      v8 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v8 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_16;
    case 4:
      v18 = *(_QWORD *)(a1 + 8);
      v16 = *(_OWORD *)(a1 + 16);
      v17 = *(_QWORD *)(a1 + 32);
      v21[0] = &v18;
      v21[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v21[2] = &v16;
      v21[3] = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &off_138DE0;
      *((_QWORD *)&v12 + 1) = 2LL;
      *(_QWORD *)&v13 = v21;
      *((_QWORD *)&v13 + 1) = 2LL;
      v14 = 0LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
        &v24,
        &v12,
        a3,
        a4,
        a5,
        a6);
      *(_QWORD *)&v13 = v25;
      v12 = v24;
      DWORD2(v13) = 125;
      v7 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v8 = v7;
      if ( !v7 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v9 = v12;
      v7[1] = v13;
      *v7 = v9;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v12, &v16);
      if ( *((_QWORD *)&v12 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v17, v12, *((_QWORD *)&v12 + 1), v13);
      if ( *(_DWORD *)a1 == 4 )
        return v8;
      goto LABEL_17;
    default:
      v20[0] = a1;
      v20[1] = <uu_env::parse_error::ParseError as core::fmt::Debug>::fmt;
      *(_QWORD *)&v12 = &off_138E00;
      *((_QWORD *)&v12 + 1) = 1LL;
      *(_QWORD *)&v13 = v20;
      *((_QWORD *)&v13 + 1) = 1LL;
      v14 = 0LL;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::fmt::format::format_inner)(
        &v26,
        &v12,
        a3,
        a4,
        a5,
        a6);
      *(_QWORD *)&v13 = v27;
      v12 = v26;
      DWORD2(v13) = 125;
      v8 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v8 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_16:
      v10 = v12;
      v8[1] = v13;
      *v8 = v10;
      if ( *(_DWORD *)a1 == 4 )
      {
LABEL_13:
        alloc::raw_vec::RawVec<T,A>::current_memory(&v12, a1 + 16);
        if ( *((_QWORD *)&v12 + 1) )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(a1 + 32, v12, *((_QWORD *)&v12 + 1), v13);
      }
      else
      {
LABEL_17:
        core::ptr::drop_in_place<uu_env::parse_error::ParseError>(a1);
      }
      return v8;
  }
}
