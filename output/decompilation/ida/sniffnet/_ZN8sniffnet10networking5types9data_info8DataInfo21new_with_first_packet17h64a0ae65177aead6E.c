__int64 __fastcall sniffnet::networking::types::data_info::DataInfo::new_with_first_packet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v6; // r15
  __int64 result; // rax
  int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = a2;
  result = std::time::Instant::now(a1);
  v10 = 0LL;
  v11 = a3;
  if ( a4 )
    v11 = 0LL;
  v12 = 0LL;
  if ( a4 )
  {
    v12 = a2;
    v6 = 0LL;
    v10 = a3;
  }
  *(_QWORD *)a1 = (unsigned __int8)a4 ^ 1u;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = v11;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 56) = v10;
  *(_QWORD *)(a1 + 48) = v12;
  *(_QWORD *)(a1 + 64) = result;
  *(_DWORD *)(a1 + 72) = v9;
  return result;
}