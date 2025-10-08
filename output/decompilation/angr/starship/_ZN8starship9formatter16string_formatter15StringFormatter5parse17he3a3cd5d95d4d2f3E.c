long long starship::formatter::string_formatter::StringFormatter::parse(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long v1;  // r15
    unsigned long v2;  // rbx

    v1 = a1 + 24;
    v2 = a1 + 48;
    starship::formatter::string_formatter::StringFormatter::parse::parse_format(a0, a1, a2, v1, v2, a3);
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,core::option::Option<core::result::Result<starship::formatter::string_formatter::VariableValue,starship::formatter::string_formatter::StringFormatterError>>>>(v1);
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,core::option::Option<core::result::Result<alloc::borrow::Cow<str>,starship::formatter::string_formatter::StringFormatterError>>>>(v2);
    return a0;
}
