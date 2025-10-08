__int64 __fastcall forc_debug::server::handlers::handle_variables::reg_id_to_string(_QWORD *a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
    return forc_debug::names::register_name((__int64)a1, (unsigned __int8)a3, a3);
  result = 0x8000000000000000LL;
  *a1 = 0x8000000000000000LL;
  return result;
}