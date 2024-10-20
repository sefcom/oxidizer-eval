unsigned __int64 __fastcall uu_env::apply_specified_env_vars(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax
  __int64 v3; // r12
  _QWORD *i; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+8h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-B0h] BYREF
  char v15; // [rsp+50h] [rbp-98h]
  _QWORD v16[6]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v17[12]; // [rsp+88h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
    goto LABEL_18;
  if ( (v1 & 7) != 0 )
    goto LABEL_18;
  result = *(_QWORD *)(a1 + 64);
  if ( result >= 0x2AAAAAAAAAAAAABLL )
    goto LABEL_18;
  if ( result )
  {
    v3 = 48 * result;
    for ( i = (_QWORD *)(v1 + 24); ; i += 6 )
    {
      v5 = *(i - 1);
      if ( *(i - 3) != 0x8000000000000000LL && (!*(i - 2) || v5 < 0) )
        break;
      if ( v5 )
      {
        result = std::env::set_var(i - 3, i);
      }
      else
      {
        v6 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v7 = *(_QWORD *)(v6 + 8);
        v8 = *(_QWORD *)(v6 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v8);
        v12[0] = v7;
        v12[1] = v8;
        v11[0] = v12;
        v11[1] = <&T as core::fmt::Display>::fmt;
        v16[0] = &unk_139100;
        v16[1] = 2LL;
        v16[4] = 0LL;
        v16[2] = v11;
        v16[3] = 1LL;
        std::io::stdio::_eprint(v16);
        v9 = i[1];
        v10 = i[2];
        if ( *i != 0x8000000000000000LL && (!v9 || v10 < 0) )
          break;
        v14[0] = 1LL;
        v14[1] = v9;
        v14[2] = v10;
        v15 = 1;
        v13[0] = v14;
        v13[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v17[0] = &off_139120;
        v17[1] = 2LL;
        v17[4] = 0LL;
        v17[2] = v13;
        v17[3] = 1LL;
        result = std::io::stdio::_eprint(v17);
      }
      v3 -= 48LL;
      if ( !v3 )
        return result;
    }
LABEL_18:
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
  }
  return result;
}
