__int64 __fastcall sniffnet::networking::types::data_info::DataInfo::add_packet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  bool v4; // cf
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // edx

  if ( a4 )
  {
    v4 = __CFADD__((*(_QWORD *)(a1 + 16))++, 1LL);
    *(_QWORD *)(a1 + 24) += v4;
    v5 = 48LL;
  }
  else
  {
    v4 = __CFADD__((*(_QWORD *)a1)++, 1LL);
    *(_QWORD *)(a1 + 8) += v4;
    v5 = 32LL;
  }
  v4 = __CFADD__(a2, *(_QWORD *)(a1 + v5));
  *(_QWORD *)(a1 + v5) += a2;
  *(_QWORD *)(a1 + v5 + 8) += a3 + v4;
  result = std::time::Instant::now(a1);
  *(_QWORD *)(a1 + 64) = result;
  *(_DWORD *)(a1 + 72) = v7;
  return result;
}