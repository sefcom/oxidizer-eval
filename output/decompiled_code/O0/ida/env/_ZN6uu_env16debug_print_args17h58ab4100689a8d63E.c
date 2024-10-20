__int64 __fastcall uu_env::debug_print_args(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+0h] [rbp-D8h] BYREF
  _QWORD v8[4]; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-B0h] BYREF
  char v10; // [rsp+40h] [rbp-98h]
  _QWORD v11[6]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v12[3]; // [rsp+78h] [rbp-60h] BYREF
  __int128 v13; // [rsp+90h] [rbp-48h]

  v2 = a1;
  v12[0] = &off_138E10;
  v12[1] = 1LL;
  v12[2] = 8LL;
  v13 = 0LL;
  result = std::io::stdio::_eprint(v12);
  if ( a2 )
  {
    result = 3 * a2;
    v4 = 0LL;
    do
    {
      if ( !v2 )
        break;
      v7 = v4;
      v5 = *(_QWORD *)(v2 + 8);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v2 + 16);
        if ( v6 >= 0 )
          continue;
      }
      core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_9_llvm_18365996230866053775, 162LL);
      ++v4;
      v9[0] = 1LL;
      v9[1] = v5;
      v9[2] = v6;
      v10 = 1;
      v8[0] = &v7;
      v8[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v8[2] = v9;
      v8[3] = <os_display::Quoted as core::fmt::Display>::fmt;
      v11[0] = &off_138E20;
      v11[1] = 3LL;
      v11[4] = 0LL;
      v11[2] = v8;
      v11[3] = 2LL;
      result = std::io::stdio::_eprint(v11);
      v2 += 24LL;
    }
    while ( v2 != a1 + 24 * a2 );
  }
  return result;
}
