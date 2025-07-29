__int64 __fastcall backdoorautomater::sanitizer::sanitize_ip(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::Ipv4Addr>::from_str(
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a2 + 16));
  core::result::Result<T,E>::expect(v2);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}