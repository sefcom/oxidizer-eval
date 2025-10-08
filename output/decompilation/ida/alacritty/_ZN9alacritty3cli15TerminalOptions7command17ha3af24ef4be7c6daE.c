unsigned __int64 __fastcall alacritty::cli::TerminalOptions::command(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int128 v4; // xmm0
  unsigned __int64 result; // rax
  __int64 v6; // [rsp+10h] [rbp-68h]
  unsigned __int64 v7; // [rsp+18h] [rbp-60h]
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-38h]
  _QWORD v11[6]; // [rsp+48h] [rbp-30h] BYREF

  if ( a3 )
  {
    v3 = a3 - 1;
    <alloc::string::String as core::clone::Clone>::clone(&v9, a2);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11, a2 + 24, v3);
    v6 = v10;
    v4 = v9;
    v7 = v11[0];
    v8 = v11[2];
    *(_QWORD *)(a1 + 32) = v11[1];
    *(_QWORD *)(a1 + 40) = v8;
    *(_QWORD *)(a1 + 16) = v6;
    result = v7;
    *(_QWORD *)(a1 + 24) = v7;
    *(_OWORD *)a1 = v4;
  }
  else
  {
    result = 0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  return result;
}