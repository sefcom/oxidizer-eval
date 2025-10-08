unsigned __int64 __fastcall firecracker::api_server::request::instance_info::parse_get_instance_info(_QWORD *a1)
{
  unsigned __int64 result; // rax
  __int64 v2[24]; // [rsp+8h] [rbp-C0h] BYREF

  <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(
    (char *)&vmm::logger::metrics::METRICS + 128,
    1LL);
  v2[0] = 14LL;
  result = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a1 + 1, v2);
  *a1 = 0LL;
  return result;
}