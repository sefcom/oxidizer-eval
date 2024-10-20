_QWORD *__fastcall uu_ls::cached_uid2usr::{{closure}}(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+8h] [rbp-130h] BYREF
  _OWORD v6[8]; // [rsp+20h] [rbp-118h] BYREF
  _OWORD v7[9]; // [rsp+A0h] [rbp-98h] BYREF

  <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v6, *a2);
  if ( *(_QWORD *)&v6[0] == 0x8000000000000000LL )
  {
    v2 = *((_QWORD *)&v6[0] + 1);
  }
  else
  {
    v7[7] = v6[7];
    v7[6] = v6[6];
    v7[5] = v6[5];
    v7[4] = v6[4];
    v7[3] = v6[3];
    v7[2] = v6[2];
    v7[1] = v6[1];
    v7[0] = v6[0];
    uucore::features::entries::uid2usr::{{closure}}(v5, v7);
    v2 = v5[1];
    if ( v5[0] != 0x8000000000000000LL )
    {
      v3 = v5[2];
      *a1 = v5[0];
      a1[1] = v2;
      a1[2] = v3;
      return a1;
    }
  }
  uu_ls::cached_uid2usr::{{closure}}::{{closure}}(a1, a2, v2);
  return a1;
}
