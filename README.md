# TemplateClassSeparateDefinition
template實作與.h分離, 因為相互引用 必須選擇用forward decl 刻意寫成指標然後讓cpp去定義他, 並且要在cpp產生template&lt;T>程式碼
