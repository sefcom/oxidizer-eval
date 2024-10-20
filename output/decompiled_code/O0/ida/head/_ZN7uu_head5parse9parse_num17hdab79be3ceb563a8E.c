__int64 __fastcall uu_head::parse::parse_num(__int64 a1, const void *a2, size_t a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r14
  int v7; // edx
  __int64 v8; // r14
  void *v9; // r15
  bool v10; // bp
  __int64 started; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  void *v18; // [rsp+0h] [rbp-118h] BYREF
  __int64 v19; // [rsp+8h] [rbp-110h]
  void *dest; // [rsp+10h] [rbp-108h]
  __int64 v21; // [rsp+18h] [rbp-100h]
  __int64 v22; // [rsp+20h] [rbp-F8h]
  __int128 v23; // [rsp+30h] [rbp-E8h]
  _QWORD v24[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-C8h]
  _QWORD v26[2]; // [rsp+68h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+78h] [rbp-A0h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-90h] BYREF
  char v29; // [rsp+A0h] [rbp-78h]
  _QWORD v30[4]; // [rsp+A8h] [rbp-70h] BYREF
  __int16 v31; // [rsp+C8h] [rbp-50h]
  char v32; // [rsp+CAh] [rbp-4Eh]
  __int64 v33; // [rsp+D0h] [rbp-48h] BYREF
  __int128 v34; // [rsp+D8h] [rbp-40h]

  v4 = core::str::<impl str>::trim_matches(a2, a3);
  v6 = v5;
  v26[0] = v4;
  v26[1] = v5 + v4;
  if ( !(unsigned int)core::str::validations::next_code_point(v26) )
    goto LABEL_6;
  if ( (v7 ^ 0xD800u) - 2048 >= 0x10F800 )
    core::panicking::panic_nounwind(anon_c621f48c071d704028df7430a8a2a976_24_llvm_15605710557940646298, 57LL);
  if ( v7 == 43 || v7 == 45 )
  {
    if ( v6 <= 1 )
    {
      if ( v6 != 1 || !v4 )
LABEL_27:
        core::str::slice_error_fail(
          v4,
          v6,
          1LL,
          v6,
          &anon_82aadc510ef785ff699953d1cb54b4b6_39_llvm_15380159803405013143);
    }
    else if ( *(char *)(v4 + 1) <= -65 )
    {
      goto LABEL_27;
    }
    ++v4;
    --v6;
    v10 = v7 == 45;
    goto LABEL_15;
  }
  if ( v7 != 1114112 )
  {
    v10 = 0;
LABEL_15:
    started = core::str::<impl str>::trim_start_matches(v4, v6, 48LL);
    if ( v12 )
    {
      v13 = started;
      v14 = v12;
      v31 = 0;
      v32 = 0;
      v30[0] = 0LL;
      v30[2] = 0LL;
      uucore::parser::parse_size::Parser::parse(v24, v30, started, v12);
      v15 = v24[0];
      if ( v24[0] == 3LL )
      {
        if ( !*((_QWORD *)&v25 + 1) )
        {
          *(_QWORD *)(a1 + 8) = v25;
LABEL_20:
          *(_BYTE *)(a1 + 16) = v10;
          *(_QWORD *)a1 = 3LL;
          return a1;
        }
        v28[0] = 0LL;
        v28[1] = v13;
        v28[2] = v14;
        v29 = 1;
        v27[0] = v28;
        v27[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v18 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
        v19 = 2LL;
        v22 = 0LL;
        dest = v27;
        v21 = 1LL;
        ((void (__fastcall *)(__int64 *, void **))alloc::fmt::format)(&v33, &v18);
        v16 = v33;
        v23 = v34;
        v15 = 2LL;
      }
      else
      {
        v16 = v24[1];
        v23 = v25;
      }
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = v16;
      *(_OWORD *)(a1 + 16) = v23;
      return a1;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    goto LABEL_20;
  }
LABEL_6:
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v18, a3, 0LL);
  v8 = v19;
  if ( v18 )
    alloc::raw_vec::handle_error(v19, dest);
  v9 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest, 1LL, 1LL, a3);
  memcpy(v9, a2, a3);
  *(_QWORD *)a1 = 1LL;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 24) = a3;
  return a1;
}
