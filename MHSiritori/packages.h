﻿#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// このソース コードは xsd によって自動生成されました。Version=4.6.1055.0 です。
// 
namespace MHSiritori {
    using namespace System;
    ref class packages;
    
    
    /// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
    [System::Serializable, 
    System::ComponentModel::DesignerCategoryAttribute(L"code"), 
    System::ComponentModel::ToolboxItem(true), 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
    System::Xml::Serialization::XmlRootAttribute(L"packages"), 
    System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
    public ref class packages : public ::System::Data::DataSet {
        public : ref class packageDataTable;
        public : ref class packageRow;
        public : ref class packageRowChangeEvent;
        
        private: MHSiritori::packages::packageDataTable^  tablepackage;
        
        private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void packageRowChangeEventHandler(::System::Object^  sender, MHSiritori::packages::packageRowChangeEvent^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        packages();
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        packages(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property MHSiritori::packages::packageDataTable^  package {
            MHSiritori::packages::packageDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::BrowsableAttribute(true), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
        virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
            ::System::Data::SchemaSerializationMode get() override;
            System::Void set(::System::Data::SchemaSerializationMode value) override;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataTableCollection^  Tables {
            ::System::Data::DataTableCollection^  get() new;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataRelationCollection^  Relations {
            ::System::Data::DataRelationCollection^  get() new;
        }
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void InitializeDerivedDataSet() override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataSet^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Boolean ShouldSerializeTables() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Boolean ShouldSerializeRelations() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars(::System::Boolean initTable);
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializepackage();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class packageDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  columnid;
            
            private: ::System::Data::DataColumn^  columnversion;
            
            private: ::System::Data::DataColumn^  columntargetFramework;
            
            private: ::System::Data::DataColumn^  columndevelopmentDependency;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MHSiritori::packages::packageRowChangeEventHandler^  packageRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MHSiritori::packages::packageRowChangeEventHandler^  packageRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MHSiritori::packages::packageRowChangeEventHandler^  packageRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MHSiritori::packages::packageRowChangeEventHandler^  packageRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            packageDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            packageDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            packageDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  idColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  versionColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  targetFrameworkColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  developmentDependencyColumn {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property MHSiritori::packages::packageRow^  default [::System::Int32 ] {
                MHSiritori::packages::packageRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddpackageRow(MHSiritori::packages::packageRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MHSiritori::packages::packageRow^  AddpackageRow(System::String^  id, System::String^  version, System::String^  targetFramework, 
                        System::Boolean developmentDependency);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MHSiritori::packages::packageRow^  NewpackageRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemovepackageRow(MHSiritori::packages::packageRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class packageRow : public ::System::Data::DataRow {
            
            private: MHSiritori::packages::packageDataTable^  tablepackage;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            packageRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  id {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  version {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  targetFramework {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Boolean developmentDependency {
                System::Boolean get();
                System::Void set(System::Boolean value);
            }
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class packageRowChangeEvent : public ::System::EventArgs {
            
            private: MHSiritori::packages::packageRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            packageRowChangeEvent(MHSiritori::packages::packageRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property MHSiritori::packages::packageRow^  Row {
                MHSiritori::packages::packageRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
    };
}
namespace MHSiritori {
    
    
    inline packages::packages() {
        this->BeginInit();
        this->InitClass();
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MHSiritori::packages::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        __super::Relations->CollectionChanged += schemaChangedHandler;
        this->EndInit();
    }
    
    inline packages::packages(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataSet(info, context, false) {
        if (this->IsBinarySerialized(info, context) == true) {
            this->InitVars(false);
            ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MHSiritori::packages::SchemaChanged);
            this->Tables->CollectionChanged += schemaChangedHandler1;
            this->Relations->CollectionChanged += schemaChangedHandler1;
            return;
        }
        ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
        if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
            if (ds->Tables[L"package"] != nullptr) {
                __super::Tables->Add((gcnew MHSiritori::packages::packageDataTable(ds->Tables[L"package"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        }
        this->GetSerializationData(info, context);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MHSiritori::packages::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        this->Relations->CollectionChanged += schemaChangedHandler;
    }
    
    inline MHSiritori::packages::packageDataTable^  packages::package::get() {
        return this->tablepackage;
    }
    
    inline ::System::Data::SchemaSerializationMode packages::SchemaSerializationMode::get() {
        return this->_schemaSerializationMode;
    }
    inline System::Void packages::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
        this->_schemaSerializationMode = __identifier(value);
    }
    
    inline ::System::Data::DataTableCollection^  packages::Tables::get() {
        return __super::Tables;
    }
    
    inline ::System::Data::DataRelationCollection^  packages::Relations::get() {
        return __super::Relations;
    }
    
    inline ::System::Void packages::InitializeDerivedDataSet() {
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline ::System::Data::DataSet^  packages::Clone() {
        MHSiritori::packages^  cln = (cli::safe_cast<MHSiritori::packages^  >(__super::Clone()));
        cln->InitVars();
        cln->SchemaSerializationMode = this->SchemaSerializationMode;
        return cln;
    }
    
    inline ::System::Boolean packages::ShouldSerializeTables() {
        return false;
    }
    
    inline ::System::Boolean packages::ShouldSerializeRelations() {
        return false;
    }
    
    inline ::System::Void packages::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
        if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            this->Reset();
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXml(reader);
            if (ds->Tables[L"package"] != nullptr) {
                __super::Tables->Add((gcnew MHSiritori::packages::packageDataTable(ds->Tables[L"package"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXml(reader);
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchema^  packages::GetSchemaSerializable() {
        ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
        this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
        stream->Position = 0;
        return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
    }
    
    inline ::System::Void packages::InitVars() {
        this->InitVars(true);
    }
    
    inline ::System::Void packages::InitVars(::System::Boolean initTable) {
        this->tablepackage = (cli::safe_cast<MHSiritori::packages::packageDataTable^  >(__super::Tables[L"package"]));
        if (initTable == true) {
            if (this->tablepackage != nullptr) {
                this->tablepackage->InitVars();
            }
        }
    }
    
    inline ::System::Void packages::InitClass() {
        this->DataSetName = L"packages";
        this->Prefix = L"";
        this->EnforceConstraints = true;
        this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
        this->tablepackage = (gcnew MHSiritori::packages::packageDataTable());
        __super::Tables->Add(this->tablepackage);
    }
    
    inline ::System::Boolean packages::ShouldSerializepackage() {
        return false;
    }
    
    inline ::System::Void packages::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
        if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  packages::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        MHSiritori::packages^  ds = (gcnew MHSiritori::packages());
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any->Namespace = ds->Namespace;
        sequence->Items->Add(any);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline packages::packageDataTable::packageDataTable() {
        this->TableName = L"package";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline packages::packageDataTable::packageDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline packages::packageDataTable::packageDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  packages::packageDataTable::idColumn::get() {
        return this->columnid;
    }
    
    inline ::System::Data::DataColumn^  packages::packageDataTable::versionColumn::get() {
        return this->columnversion;
    }
    
    inline ::System::Data::DataColumn^  packages::packageDataTable::targetFrameworkColumn::get() {
        return this->columntargetFramework;
    }
    
    inline ::System::Data::DataColumn^  packages::packageDataTable::developmentDependencyColumn::get() {
        return this->columndevelopmentDependency;
    }
    
    inline ::System::Int32 packages::packageDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline MHSiritori::packages::packageRow^  packages::packageDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<MHSiritori::packages::packageRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void packages::packageDataTable::AddpackageRow(MHSiritori::packages::packageRow^  row) {
        this->Rows->Add(row);
    }
    
    inline MHSiritori::packages::packageRow^  packages::packageDataTable::AddpackageRow(System::String^  id, System::String^  version, 
                System::String^  targetFramework, System::Boolean developmentDependency) {
        MHSiritori::packages::packageRow^  rowpackageRow = (cli::safe_cast<MHSiritori::packages::packageRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(4) {id, version, targetFramework, 
            developmentDependency};
        rowpackageRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowpackageRow);
        return rowpackageRow;
    }
    
    inline ::System::Collections::IEnumerator^  packages::packageDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  packages::packageDataTable::Clone() {
        MHSiritori::packages::packageDataTable^  cln = (cli::safe_cast<MHSiritori::packages::packageDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  packages::packageDataTable::CreateInstance() {
        return (gcnew MHSiritori::packages::packageDataTable());
    }
    
    inline ::System::Void packages::packageDataTable::InitVars() {
        this->columnid = __super::Columns[L"id"];
        this->columnversion = __super::Columns[L"version"];
        this->columntargetFramework = __super::Columns[L"targetFramework"];
        this->columndevelopmentDependency = __super::Columns[L"developmentDependency"];
    }
    
    inline ::System::Void packages::packageDataTable::InitClass() {
        this->columnid = (gcnew ::System::Data::DataColumn(L"id", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnid);
        this->columnversion = (gcnew ::System::Data::DataColumn(L"version", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columnversion);
        this->columntargetFramework = (gcnew ::System::Data::DataColumn(L"targetFramework", ::System::String::typeid, nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columntargetFramework);
        this->columndevelopmentDependency = (gcnew ::System::Data::DataColumn(L"developmentDependency", ::System::Boolean::typeid, 
            nullptr, ::System::Data::MappingType::Attribute));
        __super::Columns->Add(this->columndevelopmentDependency);
        this->columnid->AllowDBNull = false;
        this->columnid->Namespace = L"";
        this->columnversion->AllowDBNull = false;
        this->columnversion->Namespace = L"";
        this->columntargetFramework->AllowDBNull = false;
        this->columntargetFramework->Namespace = L"";
        this->columndevelopmentDependency->AllowDBNull = false;
        this->columndevelopmentDependency->Namespace = L"";
    }
    
    inline MHSiritori::packages::packageRow^  packages::packageDataTable::NewpackageRow() {
        return (cli::safe_cast<MHSiritori::packages::packageRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  packages::packageDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew MHSiritori::packages::packageRow(builder));
    }
    
    inline ::System::Type^  packages::packageDataTable::GetRowType() {
        return MHSiritori::packages::packageRow::typeid;
    }
    
    inline ::System::Void packages::packageDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->packageRowChanged(this, (gcnew MHSiritori::packages::packageRowChangeEvent((cli::safe_cast<MHSiritori::packages::packageRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void packages::packageDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->packageRowChanging(this, (gcnew MHSiritori::packages::packageRowChangeEvent((cli::safe_cast<MHSiritori::packages::packageRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void packages::packageDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->packageRowDeleted(this, (gcnew MHSiritori::packages::packageRowChangeEvent((cli::safe_cast<MHSiritori::packages::packageRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void packages::packageDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->packageRowDeleting(this, (gcnew MHSiritori::packages::packageRowChangeEvent((cli::safe_cast<MHSiritori::packages::packageRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void packages::packageDataTable::RemovepackageRow(MHSiritori::packages::packageRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  packages::packageDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        MHSiritori::packages^  ds = (gcnew MHSiritori::packages());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"packageDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline packages::packageRow::packageRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tablepackage = (cli::safe_cast<MHSiritori::packages::packageDataTable^  >(this->Table));
    }
    
    inline System::String^  packages::packageRow::id::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tablepackage->idColumn]));
    }
    inline System::Void packages::packageRow::id::set(System::String^  value) {
        this[this->tablepackage->idColumn] = value;
    }
    
    inline System::String^  packages::packageRow::version::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tablepackage->versionColumn]));
    }
    inline System::Void packages::packageRow::version::set(System::String^  value) {
        this[this->tablepackage->versionColumn] = value;
    }
    
    inline System::String^  packages::packageRow::targetFramework::get() {
        return (cli::safe_cast<::System::String^  >(this[this->tablepackage->targetFrameworkColumn]));
    }
    inline System::Void packages::packageRow::targetFramework::set(System::String^  value) {
        this[this->tablepackage->targetFrameworkColumn] = value;
    }
    
    inline System::Boolean packages::packageRow::developmentDependency::get() {
        return (cli::safe_cast<::System::Boolean >(this[this->tablepackage->developmentDependencyColumn]));
    }
    inline System::Void packages::packageRow::developmentDependency::set(System::Boolean value) {
        this[this->tablepackage->developmentDependencyColumn] = value;
    }
    
    
    inline packages::packageRowChangeEvent::packageRowChangeEvent(MHSiritori::packages::packageRow^  row, ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline MHSiritori::packages::packageRow^  packages::packageRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction packages::packageRowChangeEvent::Action::get() {
        return this->eventAction;
    }
}
