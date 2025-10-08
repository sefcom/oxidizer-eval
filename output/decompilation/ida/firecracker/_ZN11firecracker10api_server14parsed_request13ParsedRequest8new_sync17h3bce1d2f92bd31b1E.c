unsigned __int64 __fastcall firecracker::api_server::parsed_request::ParsedRequest::new_sync(_QWORD *a1, void *a2)
{
  unsigned __int64 result; // rax

  a1[3] = alloc::boxed::Box<T>::new(a2);
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}