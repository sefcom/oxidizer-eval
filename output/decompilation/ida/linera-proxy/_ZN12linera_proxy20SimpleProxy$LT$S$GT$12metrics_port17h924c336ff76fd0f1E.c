__int64 __fastcall linera_proxy::SimpleProxy<S>::metrics_port(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  _QWORD v3[2]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v4[6]; // [rsp+10h] [rbp-30h] BYREF

  v1 = a1[33];
  if ( v1 >= a1[12] )
  {
    v3[0] = a1 + 33;
    v3[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v4[0] = &off_14A95E0;
    v4[1] = 2LL;
    v4[4] = 0LL;
    v4[2] = v3;
    v4[3] = 1LL;
    core::panicking::panic_fmt(v4, &off_14A9618);
  }
  return *(unsigned __int16 *)(a1[11] + 32 * v1 + 28);
}