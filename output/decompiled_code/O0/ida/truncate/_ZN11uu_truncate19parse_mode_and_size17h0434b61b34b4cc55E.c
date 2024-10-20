__int64 *__fastcall uu_truncate::parse_mode_and_size(__int64 *a1, __int64 a2, __int64 a3)
{
  char *v4; // r12
  size_t v5; // rdx
  size_t v6; // r14
  unsigned int v7; // edx
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r15
  void *v13; // r13
  __int64 (__fastcall *v14)(); // rcx
  __int64 v15; // rdx
  void *v17; // [rsp+0h] [rbp-108h] BYREF
  __int64 v18; // [rsp+8h] [rbp-100h]
  void *dest; // [rsp+10h] [rbp-F8h]
  __int64 v20; // [rsp+18h] [rbp-F0h]
  __int64 v21; // [rsp+20h] [rbp-E8h]
  __int128 v22; // [rsp+30h] [rbp-D8h]
  _QWORD v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+50h] [rbp-B8h]
  _QWORD v25[2]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v26[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v27[3]; // [rsp+80h] [rbp-88h] BYREF
  char v28; // [rsp+98h] [rbp-70h]
  _QWORD v29[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v30; // [rsp+C0h] [rbp-48h]
  char v31; // [rsp+C2h] [rbp-46h]
  __int64 v32; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-38h]

  v4 = (char *)core::str::<impl str>::trim_matches(a2, a3);
  v6 = v5;
  v25[0] = v4;
  v25[1] = &v4[v5];
  if ( (unsigned int)core::str::validations::next_code_point(v25) )
  {
    v8 = v7;
    if ( (v7 ^ 0xD800) - 2048 >= 0x10F800 )
      core::panicking::panic_nounwind(aUnsafePrecondi, 57LL);
    if ( v7 <= 0x3E )
    {
      v9 = 0x5000A82000000000LL;
      if ( _bittest64(&v9, v7) )
      {
        if ( v6 <= 1 )
        {
          if ( v6 != 1 || !v4 )
LABEL_35:
            core::str::slice_error_fail(v4, v6, 1LL, v6, &off_106808);
        }
        else if ( v4[1] <= -65 )
        {
          goto LABEL_35;
        }
        ++v4;
        --v6;
        goto LABEL_11;
      }
    }
    if ( v7 != 1114112 )
    {
LABEL_11:
      v30 = 0;
      v31 = 0;
      v29[0] = 0LL;
      v29[2] = 0LL;
      uucore::parser::parse_size::Parser::parse(v23, v29, v4, v6);
      v10 = v23[0];
      if ( v23[0] == 3LL )
      {
        if ( *((_QWORD *)&v24 + 1) )
        {
          v27[0] = 0LL;
          v27[1] = v4;
          v27[2] = v6;
          v28 = 1;
          v26[0] = v27;
          v26[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v17 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
          v18 = 2LL;
          dest = v26;
          v20 = 1LL;
          v21 = 0LL;
          alloc::fmt::format::format_inner(&v32, &v17);
          v11 = v32;
          v22 = v33;
          v10 = 2LL;
        }
        else
        {
          v11 = v24;
          v10 = 3LL;
        }
      }
      else
      {
        v11 = v23[1];
        v22 = v24;
      }
      v14 = uu_truncate::TruncateMode::Absolute;
      switch ( v8 )
      {
        case '%':
          v14 = (__int64 (__fastcall *)())uu_truncate::TruncateMode::RoundUp;
          if ( v10 == 3 )
            goto LABEL_30;
          goto LABEL_32;
        case '+':
          v14 = uu_truncate::TruncateMode::Extend;
          if ( v10 != 3 )
            goto LABEL_32;
          goto LABEL_30;
        case '-':
          v14 = uu_truncate::TruncateMode::Reduce;
          if ( v10 != 3 )
            goto LABEL_32;
          goto LABEL_30;
        case '/':
          v14 = uu_truncate::TruncateMode::RoundDown;
          goto LABEL_29;
        case '<':
          v14 = uu_truncate::TruncateMode::AtMost;
          if ( v10 != 3 )
            goto LABEL_32;
          goto LABEL_30;
        case '>':
          v14 = uu_truncate::TruncateMode::AtLeast;
          if ( v10 != 3 )
            goto LABEL_32;
          goto LABEL_30;
        default:
LABEL_29:
          if ( v10 == 3 )
          {
LABEL_30:
            a1[1] = ((__int64 (__fastcall *)(__int64))v14)(v11);
            a1[2] = v15;
            *a1 = 3LL;
          }
          else
          {
LABEL_32:
            *a1 = v10;
            a1[1] = v11;
            *((_OWORD *)a1 + 1) = v22;
          }
          break;
      }
      return a1;
    }
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v17, v6, 0LL);
  v12 = v18;
  if ( v17 )
    alloc::raw_vec::handle_error(v18, dest);
  v13 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v4, dest, 1LL, 1LL, v6);
  memcpy(v13, v4, v6);
  *a1 = 1LL;
  a1[1] = v12;
  a1[2] = (__int64)v13;
  a1[3] = v6;
  return a1;
}
