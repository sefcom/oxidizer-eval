_QWORD *__fastcall uu_df::filesystem::mount_info_from_path::{{closure}}(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _QWORD *result; // rax
  __int64 v4; // [rsp+18h] [rbp-50h]
  __int64 v5; // [rsp+20h] [rbp-48h]
  __int64 v6; // [rsp+28h] [rbp-40h]
  __int64 v7; // [rsp+30h] [rbp-38h]
  _QWORD v8[3]; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF

  v4 = *a3;
  v9[0] = a3[1];
  v9[1] = a3[2];
  v9[2] = a3[3];
  core::result::Result<T,E>::ok(v8, v9);
  if ( v8[0] == 0x8000000000000000LL )
    core::option::unwrap_failed(&off_128A78);
  result = a1;
  v5 = v8[0];
  v6 = v8[1];
  v7 = v8[2];
  *a1 = v4;
  a1[1] = v5;
  a1[2] = v6;
  a1[3] = v7;
  return result;
}
