__int64 __fastcall forc_publish::credentials::_::<impl serde::ser::Serialize for forc_publish::credentials::Registry>::serialize(
        _DWORD *a1)
{
  __int64 result; // rax

  result = <toml_edit::ser::map::DatetimeFieldSerializer as serde::ser::Serializer>::serialize_struct(a1 + 2);
  *a1 = 1;
  return result;
}