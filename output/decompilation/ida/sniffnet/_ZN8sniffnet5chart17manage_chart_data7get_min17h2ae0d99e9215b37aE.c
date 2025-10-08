__int128 __usercall sniffnet::chart::manage_chart_data::get_min@<xmm0>(__int64 a1@<rdi>, __int64 a2@<rsi>)
{
  __int128 result; // xmm0
  __int64 v3; // rax
  float *v4; // rdx
  float v5; // xmm1_4
  __int128 v6; // xmm1

  result = 0LL;
  if ( a1 != 0 && a2 != 0 )
  {
    if ( a2 == 1 )
    {
      v3 = 0LL;
    }
    else
    {
      v4 = (float *)(a1 + 36);
      v3 = 0LL;
      do
      {
        v5 = fminf(*(v4 - 5), *(float *)&result);
        result = *(unsigned int *)v4;
        *(float *)&result = fminf(*(float *)&result, v5);
        v3 += 2LL;
        v4 += 10;
      }
      while ( (a2 & 0xFFFFFFFFFFFFFFFELL) != v3 );
    }
    if ( (a2 & 1) != 0 )
    {
      v6 = *(unsigned int *)(a1 + 20 * v3 + 16);
      *(float *)&v6 = fminf(*(float *)&v6, *(float *)&result);
      return v6;
    }
  }
  return result;
}