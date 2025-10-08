__int64 __fastcall fuel_core_e2e_client::test_context::TestContext::new_client(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v14; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-A8h]
  _QWORD v16[19]; // [rsp+20h] [rbp-98h] BYREF

  if ( __OFSUB__(0LL, *a3) )
  {
    v15 = *((_QWORD *)a2 + 2);
    v14 = *a2;
  }
  else
  {
    <alloc::string::String as core::clone::Clone>::clone(v16, a3);
    core::ptr::drop_in_place<alloc::string::String>(a2, a3, v5, v6, v7, v8, v16[0], v16[1], v16[2]);
  }
  ((void (__fastcall *)(_QWORD *, __int128 *))fuel_core_client::client::FuelClient::new)(v16, &v14);
  core::result::Result<T,E>::unwrap(a1, v16, v9, v10, v11, v12, v14, *((_QWORD *)&v14 + 1), v15);
  return a1;
}