from typing import List


class Type:
    def __init__(self, category, size):
        self.category = category
        self.size = size

    def is_struct_or_struct_pointer(self):
        return self.category == "struct" or self.category == "struct*"

    def is_result_or_result_pointer(self):
        return self.category == "Result" or self.category == "Result*"

    def is_option_or_option_pointer(self):
        return self.category == "Option" or self.category == "Option*"

    def to_pointer(self):
        if self.category:
            return Type(self.category + "*", self.size)
        return Type(None, None)

    def is_void(self):
        return self.category == "void"

    def is_valid(self):
        return self.category is not None and self.size is not None

    def __repr__(self):
        if self.is_valid():
            return f"{self.category} ({self.size} bytes)"
        return f"<Invalid Type>"

    __str__ = __repr__

    def to_tuple(self):
        return (self.category, self.size)

    @staticmethod
    def from_tuple(t):
        return Type(t[0], t[1])


class FunctionPrototype:

    def __init__(self, name, return_type: Type, parameters: List[Type]):
        self.name = name
        self.return_type = return_type
        self.parameters = parameters

    def __repr__(self):
        return f"{self.name} (returnty={self.return_type}, parameters={self.parameters})"

    __str__ = __repr__

    def to_dict(self):
        return {
            "name": self.name,
            "return_type": self.return_type.to_tuple(),
            "parameters": tuple(para.to_tuple() for para in self.parameters),
        }

    @staticmethod
    def from_dict(d):
        return FunctionPrototype(
            d["name"], Type.from_tuple(d["return_type"]), [Type.from_tuple(para) for para in d["parameters"]]
        )
