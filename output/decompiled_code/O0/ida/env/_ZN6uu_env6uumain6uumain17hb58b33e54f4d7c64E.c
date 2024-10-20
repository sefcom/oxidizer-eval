__int64 __fastcall uu_env::uumain::uumain(struct _Unwind_Exception *a1, __int64 a2)
{
  int v3; // [rsp+28h] [rbp-20h]
  _WORD v4[13]; // [rsp+2Ch] [rbp-1Ch] BYREF
  char v5; // [rsp+46h] [rbp-2h]

  v3 = <uu_env::EnvAppData as core::default::Default>::default();
  v4[12] = v3;
  v5 = BYTE2(v3);
  v4[1] = BYTE2(v3);
  v4[0] = v3;
  return uu_env::EnvAppData::run_env((bool *)v4, a1, a2);
}
