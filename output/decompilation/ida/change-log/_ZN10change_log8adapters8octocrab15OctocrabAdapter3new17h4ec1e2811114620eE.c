__int64 __fastcall change_log::adapters::octocrab::OctocrabAdapter::new(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int128 v6; // [rsp+0h] [rbp-378h]
  __int64 v7; // [rsp+10h] [rbp-368h]
  _QWORD src[18]; // [rsp+20h] [rbp-358h] BYREF
  __int128 v9; // [rsp+B0h] [rbp-2C8h]
  __int64 v10; // [rsp+C0h] [rbp-2B8h]
  __int64 v11; // [rsp+C8h] [rbp-2B0h]
  int v12; // [rsp+D8h] [rbp-2A0h]
  int v13; // [rsp+E8h] [rbp-290h]
  int v14; // [rsp+F8h] [rbp-280h]
  char v15; // [rsp+100h] [rbp-278h]
  char v16; // [rsp+158h] [rbp-220h]
  __int64 v17; // [rsp+1B0h] [rbp-1C8h]
  __int128 dest; // [rsp+1C0h] [rbp-1B8h] BYREF
  __int64 v19; // [rsp+1D0h] [rbp-1A8h]

  src[0] = 1LL;
  src[1] = 3LL;
  src[2] = 2LL;
  src[16] = 0LL;
  src[17] = 8LL;
  v9 = 0LL;
  v10 = 8LL;
  v11 = 0LL;
  v12 = 1000000000;
  v13 = 1000000000;
  v14 = 1000000000;
  v15 = 3;
  v16 = 3;
  v17 = 0LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest);
  v7 = v19;
  v6 = dest;
  octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>::personal_token(
    &dest,
    src);
  octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>::build(
    src,
    &dest,
    v1,
    v2,
    v3,
    v4,
    v6,
    *((_QWORD *)&v6 + 1),
    v7);
  core::result::Result<T,E>::unwrap(a1, src);
  return a1;
}