const char *__fastcall uu_chcon::SELinuxSecurityContext::to_c_string(__int64 a1, __int64 a2)
{
  const char *result; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __m256i v6; // [rsp+8h] [rbp-40h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  if ( *(_DWORD *)a2 == 2 )
  {
    result = *(const char **)(a2 + 8);
    v3 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 8) = 2 * (unsigned int)(result == 0LL);
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v3;
    *(_DWORD *)a1 = 18;
  }
  else
  {
    selinux::SecurityContext::to_c_string(&v6, a2);
    if ( v6.m256i_i32[0] == 10 )
    {
      result = (const char *)v6.m256i_i64[3];
      *(_QWORD *)(a1 + 24) = v6.m256i_i64[3];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)&v6.m256i_u64[1];
      *(_DWORD *)a1 = 18;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = v8;
      v4 = *(_OWORD *)v6.m256i_i8;
      v5 = *(_OWORD *)&v6.m256i_u64[2];
      *(_OWORD *)(a1 + 32) = v7;
      *(_OWORD *)(a1 + 16) = v5;
      *(_OWORD *)a1 = v4;
      result = aSelinuxsecurit;
      *(_QWORD *)(a1 + 56) = aSelinuxsecurit;
      *(_QWORD *)(a1 + 64) = 37LL;
    }
  }
  return result;
}