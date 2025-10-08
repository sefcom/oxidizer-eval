char __fastcall just::compiler::Compiler::expand_tilde(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r15
  char result; // al
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 started; // rax
  __int64 v11; // rdx
  _QWORD v12[3]; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+18h] [rbp-90h] BYREF
  __int64 v14; // [rsp+28h] [rbp-80h]

  v3 = <&str as core::str::pattern::Pattern>::strip_prefix_of(asc_6EE16, 2LL, a2, a3);
  if ( !v3 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v13, a2);
LABEL_6:
    *(_QWORD *)(a1 + 24) = v14;
    *(_OWORD *)(a1 + 8) = v13;
    result = 56;
    goto LABEL_7;
  }
  v5 = v3;
  v6 = v4;
  dirs::home_dir(v12);
  LOBYTE(v13) = 27;
  if ( !__OFSUB__(0LL, v12[0]) )
  {
    core::ptr::drop_in_place<just::error::Error>(&v13);
    v8 = v12[1];
    v9 = v12[2];
    started = core::str::<impl str>::trim_start_matches(v5, v6);
    std::path::Path::join(&v13, v8, v9, started, v11);
    core::ptr::drop_in_place<std::path::PathBuf>(v12);
    goto LABEL_6;
  }
  result = 27;
LABEL_7:
  *(_BYTE *)a1 = result;
  return result;
}