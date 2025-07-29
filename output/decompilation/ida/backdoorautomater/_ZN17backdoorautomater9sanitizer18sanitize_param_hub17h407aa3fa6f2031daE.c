__int64 __fastcall backdoorautomater::sanitizer::sanitize_param_hub(__int128 *a1, int a2)
{
  unsigned __int8 v2; // r14
  __int128 v4; // [rsp+10h] [rbp-68h] BYREF
  __int64 v5; // [rsp+20h] [rbp-58h]
  __int128 v6; // [rsp+28h] [rbp-50h] BYREF
  __int64 v7; // [rsp+38h] [rbp-40h]
  int v8; // [rsp+40h] [rbp-38h]

  v5 = *((_QWORD *)a1 + 2);
  v4 = *a1;
  backdoorautomater::sanitizer::sanitize_ip(&v6, &v4);
  v8 = a2;
  *((_QWORD *)a1 + 2) = v7;
  *a1 = v6;
  v5 = *((_QWORD *)a1 + 5);
  v4 = *(__int128 *)((char *)a1 + 24);
  backdoorautomater::sanitizer::sanitize_service(&v6, &v4);
  *((_QWORD *)a1 + 5) = v7;
  *(__int128 *)((char *)a1 + 24) = v6;
  v5 = *((_QWORD *)a1 + 8);
  v4 = a1[3];
  backdoorautomater::sanitizer::sanitize_port(&v6, &v4);
  *((_QWORD *)a1 + 8) = v7;
  a1[3] = v6;
  v5 = *((_QWORD *)a1 + 11);
  v4 = *(__int128 *)((char *)a1 + 72);
  backdoorautomater::sanitizer::sanitize_time(&v6, &v4);
  *((_QWORD *)a1 + 11) = v7;
  *(__int128 *)((char *)a1 + 72) = v6;
  v5 = *((_QWORD *)a1 + 14);
  v4 = a1[6];
  backdoorautomater::sanitizer::sanitize_path(&v6, &v4);
  *((_QWORD *)a1 + 14) = v7;
  a1[6] = v6;
  v2 = *((_BYTE *)a1 + 144);
  backdoorautomater::sanitizer::sanitize_choice(v2, (unsigned __int8)v8);
  *((_BYTE *)a1 + 144) = v2;
  v5 = *((_QWORD *)a1 + 17);
  v4 = *(__int128 *)((char *)a1 + 120);
  backdoorautomater::sanitizer::sanitize_script(&v6, &v4);
  *((_QWORD *)a1 + 17) = v7;
  *(__int128 *)((char *)a1 + 120) = v6;
  return core::ptr::drop_in_place<backdoorautomater::Param>(a1);
}