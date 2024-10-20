__int64 __fastcall uu_join::parse_separator(__int64 a1, __int64 a2)
{
  char *v3; // rsi
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // rbx
  _QWORD *v7; // r14
  int v8; // edx
  int v9; // ebp
  int v10; // edx
  __int64 v11; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+0h] [rbp-B8h] BYREF
  char **v18; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-A0h]
  _QWORD *v20; // [rsp+20h] [rbp-98h]
  __int64 v21; // [rsp+28h] [rbp-90h]
  __int64 v22; // [rsp+30h] [rbp-88h]
  _QWORD v23[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v25[3]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v26; // [rsp+78h] [rbp-40h] BYREF
  __int64 v27; // [rsp+88h] [rbp-30h]

  v3 = *(char **)(a2 + 8);
  if ( !v3 || (v4 = *(_QWORD *)(a2 + 16), v4 < 0) )
    core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_53_llvm_18377431372254846744, 162LL);
  if ( v4 == 1 )
  {
    v5 = *v3;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_BYTE *)(a1 + 8) = v5;
    return a1;
  }
  if ( v4 )
  {
    std::sys::os_str::bytes::Slice::to_str(&v18);
    if ( v18 || (v6 = v19) == 0 )
    {
      *(_QWORD *)(a1 + 8) = uucore::mods::error::USimpleError::new(1LL, aNonUtf8MultiBy, 24LL);
      *(_QWORD *)(a1 + 16) = v11;
      goto LABEL_17;
    }
    v7 = v20;
    v23[0] = v19;
    v23[1] = v20;
    v17[0] = v19;
    v17[1] = (char *)v20 + v19;
    if ( (unsigned int)core::str::validations::next_code_point(v17) )
    {
      v9 = v8;
      if ( (v8 ^ 0xD800u) - 2048 >= 0x10F800 )
        goto LABEL_26;
      if ( v8 != 1114112 )
      {
        if ( !(unsigned int)core::str::validations::next_code_point(v17) )
        {
LABEL_15:
          <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(&v26, v6, v7);
          *(_QWORD *)(a1 + 16) = v27;
          *(_OWORD *)a1 = v26;
          return a1;
        }
        if ( (v10 ^ 0xD800u) - 2048 < 0x10F800 )
        {
          if ( v10 == 1114112 )
            goto LABEL_15;
          if ( v9 == 92 && v10 == 48 )
          {
            *(_QWORD *)a1 = 0x8000000000000000LL;
            *(_BYTE *)(a1 + 8) = 0;
            return a1;
          }
          v24[0] = v23;
          v24[1] = <&T as core::fmt::Display>::fmt;
          v18 = &off_1312B8;
          v19 = 1LL;
          v20 = v24;
          v21 = 1LL;
          v22 = 0LL;
          alloc::fmt::format::format_inner(v25, &v18);
          v13 = v25[0];
          v14 = v25[1];
          v15 = v25[2];
          v16 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
          if ( !v16 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          *(_QWORD *)v16 = v13;
          *(_QWORD *)(v16 + 8) = v14;
          *(_QWORD *)(v16 + 16) = v15;
          *(_DWORD *)(v16 + 24) = 1;
          *(_QWORD *)(a1 + 8) = v16;
          *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
LABEL_17:
          *(_QWORD *)a1 = 0x8000000000000004LL;
          return a1;
        }
LABEL_26:
        core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_47_llvm_18377431372254846744, 57LL);
      }
    }
    core::option::expect_failed(aValidStringWit, 35LL, &off_1312A0);
  }
  *(_QWORD *)a1 = 0x8000000000000002LL;
  return a1;
}
