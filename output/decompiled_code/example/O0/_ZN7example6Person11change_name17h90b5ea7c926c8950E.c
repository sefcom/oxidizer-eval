_QWORD *__fastcall example::Person::change_name(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  core::ptr::drop_in_place<alloc::string::String>(a1);
  result = a1;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  return result;
}
