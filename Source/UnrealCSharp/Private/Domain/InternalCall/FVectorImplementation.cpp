﻿#include "Domain/InternalCall/FVectorImplementation.h"
#include "Binding/Class/TBaseStructureBuilder.h"
#include "Bridge/FTypeBridge.h"
#include "Environment/FCSharpEnvironment.h"
#include "Macro/ClassMacro.h"
#include "Macro/NamespaceMacro.h"

struct FRegisterVector
{
	FRegisterVector()
	{
		TBaseStructureBuilder<FVector>(NAMESPACE_LIBRARY)
			.Function("CrossProduct", static_cast<void*>(FVectorImplementation::Vector_CrossProductImplementation))
			.Function("DotProduct", static_cast<void*>(FVectorImplementation::Vector_DotProductImplementation))
			.Function("Add", static_cast<void*>(FVectorImplementation::Vector_AddImplementation))
			.Function("AddBias", static_cast<void*>(FVectorImplementation::Vector_AddBiasImplementation))
			.Function("Subtract", static_cast<void*>(FVectorImplementation::Vector_SubtractImplementation))
			.Function("SubtractBias", static_cast<void*>(FVectorImplementation::Vector_SubtractBiasImplementation))
			.Function("Multiply", static_cast<void*>(FVectorImplementation::Vector_MultiplyImplementation))
			.Function("MultiplyScale", static_cast<void*>(FVectorImplementation::Vector_MultiplyScaleImplementation))
			.Function("Divide", static_cast<void*>(FVectorImplementation::Vector_DivideImplementation))
			.Function("DivideScale", static_cast<void*>(FVectorImplementation::Vector_DivideScaleImplementation))
			.Function("Equality", static_cast<void*>(FVectorImplementation::Vector_EqualityImplementation))
			.Function("Inequality", static_cast<void*>(FVectorImplementation::Vector_InequalityImplementation))
			.Function("Equals", static_cast<void*>(FVectorImplementation::Vector_EqualsImplementation))
			.Function("AllComponentsEqual",
			          static_cast<void*>(FVectorImplementation::Vector_AllComponentsEqualImplementation))
			.Function("Negated", static_cast<void*>(FVectorImplementation::Vector_NegatedImplementation))
			.Function("GetComponent", static_cast<void*>(FVectorImplementation::Vector_GetComponentImplementation))
			.Function("SetComponent", static_cast<void*>(FVectorImplementation::Vector_SetComponentImplementation))
			.Function("Component", static_cast<void*>(FVectorImplementation::Vector_ComponentImplementation))
			.Function("Set", static_cast<void*>(FVectorImplementation::Vector_SetImplementation))
			.Function("GetMax", static_cast<void*>(FVectorImplementation::Vector_GetMaxImplementation))
			.Function("GetAbsMax", static_cast<void*>(FVectorImplementation::Vector_GetAbsMaxImplementation))
			.Function("GetMin", static_cast<void*>(FVectorImplementation::Vector_GetMinImplementation))
			.Function("GetAbsMin", static_cast<void*>(FVectorImplementation::Vector_GetAbsMinImplementation))
			.Function("Size", static_cast<void*>(FVectorImplementation::Vector_SizeImplementation))
			.Function("SizeSquared", static_cast<void*>(FVectorImplementation::Vector_SizeSquaredImplementation))
			.Function("Size2D", static_cast<void*>(FVectorImplementation::Vector_Size2DImplementation))
			.Function("SizeSquared2D", static_cast<void*>(FVectorImplementation::Vector_SizeSquared2DImplementation))
			.Function("IsNearlyZero", static_cast<void*>(FVectorImplementation::Vector_IsNearlyZeroImplementation))
			.Function("IsZero", static_cast<void*>(FVectorImplementation::Vector_IsZeroImplementation))
			.Function("IsUnit", static_cast<void*>(FVectorImplementation::Vector_IsUnitImplementation))
			.Function("IsNormalized", static_cast<void*>(FVectorImplementation::Vector_IsNormalizedImplementation))
			.Function("Normalize", static_cast<void*>(FVectorImplementation::Vector_NormalizeImplementation))
			.Function("GetUnsafeNormal",
			          static_cast<void*>(FVectorImplementation::Vector_GetUnsafeNormalImplementation))
			.Function("GetSafeNormal", static_cast<void*>(FVectorImplementation::Vector_GetSafeNormalImplementation))
			.Function("GetSafeNormal2D",
			          static_cast<void*>(FVectorImplementation::Vector_GetSafeNormal2DImplementation))
			.Function("ToDirectionAndLength",
			          static_cast<void*>(FVectorImplementation::Vector_ToDirectionAndLengthImplementation))
			.Function("GetSignVector", static_cast<void*>(FVectorImplementation::Vector_GetSignVectorImplementation))
			.Function("Projection", static_cast<void*>(FVectorImplementation::Vector_ProjectionImplementation))
			.Function("GetUnsafeNormal2D",
			          static_cast<void*>(FVectorImplementation::Vector_GetUnsafeNormal2DImplementation))
			.Function("GridSnap", static_cast<void*>(FVectorImplementation::Vector_GridSnapImplementation))
			.Function("BoundToCube", static_cast<void*>(FVectorImplementation::Vector_BoundToCubeImplementation))
			.Function("BoundToBox", static_cast<void*>(FVectorImplementation::Vector_BoundToBoxImplementation))
			.Function("GetClampedToSize",
			          static_cast<void*>(FVectorImplementation::Vector_GetClampedToSizeImplementation))
			.Function("GetClampedToSize2D",
			          static_cast<void*>(FVectorImplementation::Vector_GetClampedToSize2DImplementation))
			.Function("GetClampedToMaxSize",
			          static_cast<void*>(FVectorImplementation::Vector_GetClampedToMaxSizeImplementation))
			.Function("GetClampedToMaxSize2D",
			          static_cast<void*>(FVectorImplementation::Vector_GetClampedToMaxSize2DImplementation))
			.Function("AddBounded", static_cast<void*>(FVectorImplementation::Vector_AddBoundedImplementation))
			.Function("Reciprocal", static_cast<void*>(FVectorImplementation::Vector_ReciprocalImplementation))
			.Function("IsUniform", static_cast<void*>(FVectorImplementation::Vector_IsUniformImplementation))
			.Function("MirrorByVector", static_cast<void*>(FVectorImplementation::Vector_MirrorByVectorImplementation))
			.Function("MirrorByPlane", static_cast<void*>(FVectorImplementation::Vector_MirrorByPlaneImplementation))
			.Function("RotateAngleAxis",
			          static_cast<void*>(FVectorImplementation::Vector_RotateAngleAxisImplementation))
			.Function("CosineAngle2D", static_cast<void*>(FVectorImplementation::Vector_CosineAngle2DImplementation))
			.Function("ProjectOnTo", static_cast<void*>(FVectorImplementation::Vector_ProjectOnToImplementation))
			.Function("ProjectOnToNormal",
			          static_cast<void*>(FVectorImplementation::Vector_ProjectOnToNormalImplementation))
			.Function("ToOrientationRotator",
			          static_cast<void*>(FVectorImplementation::Vector_ToOrientationRotatorImplementation))
			.Function("ToOrientationQuat",
			          static_cast<void*>(FVectorImplementation::Vector_ToOrientationQuatImplementation))
			.Function("Rotation", static_cast<void*>(FVectorImplementation::Vector_RotationImplementation))
			.Function("FindBestAxisVectors",
			          static_cast<void*>(FVectorImplementation::Vector_FindBestAxisVectorsImplementation))
			.Function("UnwindEuler", static_cast<void*>(FVectorImplementation::Vector_UnwindEulerImplementation))
			.Function("ContainsNaN", static_cast<void*>(FVectorImplementation::Vector_ContainsNaNImplementation))
			.Function("ToString", static_cast<void*>(FVectorImplementation::Vector_ToStringImplementation))
			.Function("ToText", static_cast<void*>(FVectorImplementation::Vector_ToTextImplementation))
			.Function("ToCompactString",
			          static_cast<void*>(FVectorImplementation::Vector_ToCompactStringImplementation))
			.Function("ToCompactText", static_cast<void*>(FVectorImplementation::Vector_ToCompactTextImplementation))
			.Function("InitFromString", static_cast<void*>(FVectorImplementation::Vector_InitFromStringImplementation))
			.Function("UnitCartesianToSpherical",
			          static_cast<void*>(FVectorImplementation::Vector_UnitCartesianToSphericalImplementation))
			.Function("HeadingAngle", static_cast<void*>(FVectorImplementation::Vector_HeadingAngleImplementation))
			.Function("CreateOrthonormalBasis",
			          static_cast<void*>(FVectorImplementation::Vector_CreateOrthonormalBasisImplementation))
			.Function("PointsAreSame", static_cast<void*>(FVectorImplementation::Vector_PointsAreSameImplementation))
			.Function("PointsAreNear", static_cast<void*>(FVectorImplementation::Vector_PointsAreNearImplementation))
			.Function("PointPlaneDist", static_cast<void*>(FVectorImplementation::Vector_PointPlaneDistImplementation))
			.Function("PointPlaneProjectByPlane",
			          static_cast<void*>(FVectorImplementation::Vector_PointPlaneProjectByPlaneImplementation))
			.Function("PointPlaneProjectByPoints",
			          static_cast<void*>(FVectorImplementation::Vector_PointPlaneProjectByPointsImplementation))
			.Function("PointPlaneProjectByPlaneBaseAndPlaneNormal",
			          static_cast<void*>(
				          FVectorImplementation::Vector_PointPlaneProjectByPlaneBaseAndPlaneNormalImplementation))
			.Function("VectorPlaneProject",
			          static_cast<void*>(FVectorImplementation::Vector_VectorPlaneProjectImplementation))
			.Function("Dist", static_cast<void*>(FVectorImplementation::Vector_DistImplementation))
			.Function("Distance", static_cast<void*>(FVectorImplementation::Vector_DistanceImplementation))
			.Function("DistXY", static_cast<void*>(FVectorImplementation::Vector_DistXYImplementation))
			.Function("Dist2D", static_cast<void*>(FVectorImplementation::Vector_Dist2DImplementation))
			.Function("DistSquared", static_cast<void*>(FVectorImplementation::Vector_DistSquaredImplementation))
			.Function("DistSquaredXY", static_cast<void*>(FVectorImplementation::Vector_DistSquaredXYImplementation))
			.Function("DistSquared2D", static_cast<void*>(FVectorImplementation::Vector_DistSquared2DImplementation))
			.Function("BoxPushOut", static_cast<void*>(FVectorImplementation::Vector_BoxPushOutImplementation))
			.Function("Parallel", static_cast<void*>(FVectorImplementation::Vector_ParallelImplementation))
			.Function("Coincident", static_cast<void*>(FVectorImplementation::Vector_CoincidentImplementation))
			.Function("Orthogonal", static_cast<void*>(FVectorImplementation::Vector_OrthogonalImplementation))
			.Function("Coplanar", static_cast<void*>(FVectorImplementation::Vector_CoplanarImplementation))
			.Function("Triple", static_cast<void*>(FVectorImplementation::Vector_TripleImplementation))
			.Function("RadiansToDegrees",
			          static_cast<void*>(FVectorImplementation::Vector_RadiansToDegreesImplementation))
			.Function("DegreesToRadians",
			          static_cast<void*>(FVectorImplementation::Vector_DegreesToRadiansImplementation))
			.Register();
	}
};

static FRegisterVector RegisterVector;

void FVectorImplementation::Vector_CrossProductImplementation(const MonoObject* A, const MonoObject* B,
                                                              MonoObject** OutValue)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorA != nullptr && VectorB != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = VectorA->operator^(*VectorB);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

float FVectorImplementation::Vector_DotProductImplementation(const MonoObject* A, const MonoObject* B)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	if (VectorA != nullptr && VectorB != nullptr)
	{
		return VectorA->operator|(*VectorB);
	}

	return 0.f;
}

void FVectorImplementation::Vector_AddImplementation(const MonoObject* A, const MonoObject* B, MonoObject** OutValue)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorA != nullptr && VectorB != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = VectorA->operator+(*VectorB);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_AddBiasImplementation(const MonoObject* InMonoObject, const float Bias,
                                                         MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->operator+(Bias);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_SubtractImplementation(const MonoObject* A, const MonoObject* B,
                                                          MonoObject** OutValue)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorA != nullptr && VectorB != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = VectorA->operator-(*VectorB);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_SubtractBiasImplementation(const MonoObject* InMonoObject, const float Bias,
                                                              MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->operator-(Bias);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_MultiplyImplementation(const MonoObject* A, const MonoObject* B,
                                                          MonoObject** OutValue)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorA != nullptr && VectorB != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = VectorA->operator*(*VectorB);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_MultiplyScaleImplementation(const MonoObject* InMonoObject, const float Scale,
                                                               MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->operator*(Scale);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_DivideImplementation(const MonoObject* A, const MonoObject* B, MonoObject** OutValue)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorA != nullptr && VectorB != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = VectorA->operator/(*VectorB);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_DivideScaleImplementation(const MonoObject* InMonoObject, const float Scale,
                                                             MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->operator/(Scale);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

bool FVectorImplementation::Vector_EqualityImplementation(const MonoObject* A, const MonoObject* B)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	if (VectorA != nullptr && VectorB != nullptr)
	{
		return VectorA->operator==(*VectorB);
	}

	return false;
}

bool FVectorImplementation::Vector_InequalityImplementation(const MonoObject* A, const MonoObject* B)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	if (VectorA != nullptr && VectorB != nullptr)
	{
		return VectorA->operator!=(*VectorB);
	}

	return false;
}

bool FVectorImplementation::Vector_EqualsImplementation(const MonoObject* A, const MonoObject* B, const float Tolerance)
{
	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	if (VectorA != nullptr && VectorB != nullptr)
	{
		return VectorA->Equals(*VectorB, Tolerance);
	}

	return false;
}

bool FVectorImplementation::Vector_AllComponentsEqualImplementation(const MonoObject* InMonoObject,
                                                                    const float Tolerance)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->AllComponentsEqual(Tolerance);
	}

	return false;
}

void FVectorImplementation::Vector_NegatedImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->operator-();

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

float FVectorImplementation::Vector_GetComponentImplementation(const MonoObject* InMonoObject, const int32 InIndex)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->operator[](InIndex);
	}

	return 0.f;
}

void FVectorImplementation::Vector_SetComponentImplementation(const MonoObject* InMonoObject, const int32 InIndex,
                                                              const float InValue)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		Vector->operator[](InIndex) = InValue;
	}
}

float FVectorImplementation::Vector_ComponentImplementation(const MonoObject* InMonoObject, const int32 InIndex)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->Component(InIndex);
	}

	return 0.f;
}

void FVectorImplementation::Vector_SetImplementation(const MonoObject* InMonoObject, const float InX, const float InY,
                                                     const float InZ)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		Vector->Set(InX, InY, InZ);
	}
}

float FVectorImplementation::Vector_GetMaxImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->GetMax();
	}

	return 0.f;
}

float FVectorImplementation::Vector_GetAbsMaxImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->GetAbsMax();
	}

	return 0.f;
}

float FVectorImplementation::Vector_GetMinImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->GetMin();
	}

	return 0.f;
}

float FVectorImplementation::Vector_GetAbsMinImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->GetAbsMin();
	}

	return 0.f;
}

float FVectorImplementation::Vector_SizeImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->Size();
	}

	return 0.f;
}

float FVectorImplementation::Vector_SizeSquaredImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->SizeSquared();
	}

	return 0.f;
}

float FVectorImplementation::Vector_Size2DImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->Size2D();
	}

	return 0.f;
}

float FVectorImplementation::Vector_SizeSquared2DImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->SizeSquared2D();
	}

	return 0.f;
}

bool FVectorImplementation::Vector_IsNearlyZeroImplementation(const MonoObject* InMonoObject, const float Tolerance)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->IsNearlyZero(Tolerance);
	}

	return false;
}

bool FVectorImplementation::Vector_IsZeroImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->IsZero();
	}

	return false;
}

bool FVectorImplementation::Vector_IsUnitImplementation(const MonoObject* InMonoObject,
                                                        const float LengthSquaredTolerance)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->IsUnit(LengthSquaredTolerance);
	}

	return false;
}

bool FVectorImplementation::Vector_IsNormalizedImplementation(const MonoObject* InMonoObject)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->IsNormalized();
	}

	return false;
}

bool FVectorImplementation::Vector_NormalizeImplementation(const MonoObject* InMonoObject, const float Tolerance)
{
	if (const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject))
	{
		return Vector->Normalize(Tolerance);
	}

	return false;
}

void FVectorImplementation::Vector_GetUnsafeNormalImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetUnsafeNormal();

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_GetSafeNormalImplementation(const MonoObject* InMonoObject, const float Tolerance,
                                                               MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetSafeNormal(Tolerance);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_GetSafeNormal2DImplementation(const MonoObject* InMonoObject, const float Tolerance,
                                                                 MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetSafeNormal2D(Tolerance);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_ToDirectionAndLengthImplementation(const MonoObject* InMonoObject,
                                                                      MonoObject** OutDir, float& OutLength)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutDir = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		Vector->ToDirectionAndLength(*OutVector, OutLength);
	}
}

void FVectorImplementation::Vector_GetSignVectorImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetSignVector();

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_ProjectionImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->Projection();

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_GetUnsafeNormal2DImplementation(const MonoObject* InMonoObject,
                                                                   MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetUnsafeNormal2D();

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_GridSnapImplementation(const MonoObject* InMonoObject, const float GridSz,
                                                          MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GridSnap(GridSz);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_BoundToCubeImplementation(const MonoObject* InMonoObject, const float Radius,
                                                             MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->BoundToCube(Radius);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_BoundToBoxImplementation(const MonoObject* InMonoObject, const MonoObject* Min,
                                                            const MonoObject* Max, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto VectorMin = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Min);

	const auto VectorMax = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Max);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && VectorMin != nullptr && VectorMax != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->BoundToBox(*VectorMin, *VectorMax);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_GetClampedToSizeImplementation(const MonoObject* InMonoObject, const float Min,
                                                                  const float Max, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetClampedToSize(Min, Max);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_GetClampedToSize2DImplementation(const MonoObject* InMonoObject, const float Min,
                                                                    const float Max, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetClampedToSize2D(Min, Max);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_GetClampedToMaxSizeImplementation(const MonoObject* InMonoObject,
                                                                     const float MaxSize, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetClampedToMaxSize(MaxSize);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_GetClampedToMaxSize2DImplementation(const MonoObject* InMonoObject,
                                                                       const float MaxSize, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->GetClampedToMaxSize2D(MaxSize);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_AddBoundedImplementation(const MonoObject* InMonoObject, const MonoObject* V,
                                                            const float Radius)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto VectorV = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V);

	if (Vector != nullptr && VectorV != nullptr)
	{
		Vector->AddBounded(*VectorV, Radius);
	}
}

void FVectorImplementation::Vector_ReciprocalImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->Reciprocal();

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

bool FVectorImplementation::Vector_IsUniformImplementation(const MonoObject* InMonoObject, const float Tolerance)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr)
	{
		return Vector->IsUniform(Tolerance);
	}

	return false;
}

void FVectorImplementation::Vector_MirrorByVectorImplementation(const MonoObject* InMonoObject,
                                                                const MonoObject* MirrorNormal, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto VectorMirrorNormal = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), MirrorNormal);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && VectorMirrorNormal != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->MirrorByVector(*VectorMirrorNormal);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_MirrorByPlaneImplementation(const MonoObject* InMonoObject, const MonoObject* Plane,
                                                               MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto PlanePlane = FCSharpEnvironment::TGetAddress<UScriptStruct, FPlane>()(
		FCSharpEnvironment::GetEnvironment(), Plane);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && PlanePlane != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->MirrorByPlane(*PlanePlane);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_RotateAngleAxisImplementation(const MonoObject* InMonoObject, const float AngleDeg,
                                                                 const MonoObject* Axis, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto VectorAxis = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Axis);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && VectorAxis != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->RotateAngleAxis(AngleDeg, *VectorAxis);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

float FVectorImplementation::Vector_CosineAngle2DImplementation(const MonoObject* InMonoObject, const MonoObject* B)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	if (Vector != nullptr && VectorB != nullptr)
	{
		return Vector->CosineAngle2D(*VectorB);
	}

	return 0.f;
}

void FVectorImplementation::Vector_ProjectOnToImplementation(const MonoObject* InMonoObject, const MonoObject* A,
                                                             MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && VectorA != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->ProjectOnTo(*VectorA);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_ProjectOnToNormalImplementation(const MonoObject* InMonoObject,
                                                                   const MonoObject* Normal, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto VectorNormal = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && VectorNormal != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = Vector->ProjectOnToNormal(*VectorNormal);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_ToOrientationRotatorImplementation(const MonoObject* InMonoObject,
                                                                      MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FRotator)),
		CLASS_BASE_STRUCTURE_NAME(FRotator));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutRotator = FCSharpEnvironment::TGetAddress<UScriptStruct, FRotator>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutRotator != nullptr)
	{
		const auto ResultRotator = Vector->ToOrientationRotator();

		OutRotator->Pitch = ResultRotator.Pitch;

		OutRotator->Yaw = ResultRotator.Yaw;

		OutRotator->Roll = ResultRotator.Roll;
	}
}

void FVectorImplementation::Vector_ToOrientationQuatImplementation(const MonoObject* InMonoObject,
                                                                   MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FQuat)),
		CLASS_BASE_STRUCTURE_NAME(FQuat));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutQuat = FCSharpEnvironment::TGetAddress<UScriptStruct, FQuat>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutQuat != nullptr)
	{
		const auto ResultQuat = Vector->ToOrientationQuat();

		OutQuat->X = ResultQuat.X;

		OutQuat->Y = ResultQuat.Y;

		OutQuat->Z = ResultQuat.Z;

		OutQuat->W = ResultQuat.W;
	}
}

void FVectorImplementation::Vector_RotationImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FRotator)),
		CLASS_BASE_STRUCTURE_NAME(FRotator));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutRotator = FCSharpEnvironment::TGetAddress<UScriptStruct, FRotator>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutRotator != nullptr)
	{
		const auto ResultRotator = Vector->Rotation();

		OutRotator->Pitch = ResultRotator.Pitch;

		OutRotator->Yaw = ResultRotator.Yaw;

		OutRotator->Roll = ResultRotator.Roll;
	}
}

void FVectorImplementation::Vector_FindBestAxisVectorsImplementation(const MonoObject* InMonoObject, MonoObject** Axis1,
                                                                     MonoObject** Axis2)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject1 = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*Axis1 = NewMonoObject1;

	const auto OutAxis1Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject1);

	const auto NewMonoObject2 = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*Axis2 = NewMonoObject2;

	const auto OutAxis2Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject2);

	if (Vector != nullptr && OutAxis1Vector != nullptr && OutAxis2Vector != nullptr)
	{
		Vector->FindBestAxisVectors(*OutAxis1Vector, *OutAxis2Vector);
	}
}

void FVectorImplementation::Vector_UnwindEulerImplementation(const MonoObject* InMonoObject)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr)
	{
		Vector->UnwindEuler();
	}
}

bool FVectorImplementation::Vector_ContainsNaNImplementation(const MonoObject* InMonoObject)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr)
	{
		return Vector->ContainsNaN();
	}

	return false;
}

void FVectorImplementation::Vector_ToStringImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr)
	{
		const auto ResultString = Vector->ToString();

		const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
			COMBINE_NAMESPACE(NAMESPACE_ROOT, NAMESPACE_COMMON), CLASS_F_STRING);

		auto NewMonoString = static_cast<void*>(FCSharpEnvironment::GetEnvironment()->GetDomain()->String_New(
			TCHAR_TO_UTF8(*ResultString)));

		const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(
			FoundMonoClass, 1, &NewMonoString);

		*OutValue = NewMonoObject;
	}
}

void FVectorImplementation::Vector_ToTextImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr)
	{
		const auto ResultText = Vector->ToText();

		const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
			COMBINE_NAMESPACE(NAMESPACE_ROOT, NAMESPACE_COMMON), CLASS_F_TEXT);

		auto NewMonoString = static_cast<void*>(FCSharpEnvironment::GetEnvironment()->GetDomain()->String_New(
			TCHAR_TO_UTF8(*ResultText.ToString())));

		const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(
			FoundMonoClass, 1, &NewMonoString);

		*OutValue = NewMonoObject;
	}
}

void FVectorImplementation::Vector_ToCompactStringImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr)
	{
		const auto ResultString = Vector->ToCompactString();

		const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
			COMBINE_NAMESPACE(NAMESPACE_ROOT, NAMESPACE_COMMON), CLASS_F_STRING);

		auto NewMonoString = static_cast<void*>(FCSharpEnvironment::GetEnvironment()->GetDomain()->String_New(
			TCHAR_TO_UTF8(*ResultString)));

		const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(
			FoundMonoClass, 1, &NewMonoString);

		*OutValue = NewMonoObject;
	}
}

void FVectorImplementation::Vector_ToCompactTextImplementation(const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr)
	{
		const auto ResultText = Vector->ToCompactText();

		const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
			COMBINE_NAMESPACE(NAMESPACE_ROOT, NAMESPACE_COMMON), CLASS_F_TEXT);

		auto NewMonoString = static_cast<void*>(FCSharpEnvironment::GetEnvironment()->GetDomain()->String_New(
			TCHAR_TO_UTF8(*ResultText.ToString())));

		const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(
			FoundMonoClass, 1, &NewMonoString);

		*OutValue = NewMonoObject;
	}
}

bool FVectorImplementation::Vector_InitFromStringImplementation(const MonoObject* InMonoObject,
                                                                MonoObject* InSourceString)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr && InSourceString != nullptr)
	{
		return Vector->InitFromString(FCSharpEnvironment::GetEnvironment()->GetDomain()->String_To_UTF8(
			FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_To_String(InSourceString, nullptr)));
	}

	return false;
}

void FVectorImplementation::Vector_UnitCartesianToSphericalImplementation(
	const MonoObject* InMonoObject, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector2D)),
		CLASS_BASE_STRUCTURE_NAME(FVector2D));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector2D = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector2D>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector2D != nullptr)
	{
		const auto ResultVector2D = Vector->UnitCartesianToSpherical();

		OutVector2D->X = ResultVector2D.X;

		OutVector2D->Y = ResultVector2D.Y;
	}
}

float FVectorImplementation::Vector_HeadingAngleImplementation(const MonoObject* InMonoObject)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), InMonoObject);

	if (Vector != nullptr)
	{
		return Vector->HeadingAngle();
	}

	return false;
}

void FVectorImplementation::Vector_CreateOrthonormalBasisImplementation(MonoObject** XAxis, MonoObject** YAxis,
                                                                        MonoObject** ZAxis)
{
	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject1 = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*XAxis = NewMonoObject1;

	const auto OutXAxisVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject1);

	const auto NewMonoObject2 = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*YAxis = NewMonoObject2;

	const auto OutYAxisVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject2);

	const auto NewMonoObject3 = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*ZAxis = NewMonoObject3;

	const auto OutZAxisVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject3);

	if (OutXAxisVector != nullptr && OutYAxisVector != nullptr && OutZAxisVector != nullptr)
	{
		FVector::CreateOrthonormalBasis(*OutXAxisVector, *OutYAxisVector, *OutZAxisVector);
	}
}

bool FVectorImplementation::Vector_PointsAreSameImplementation(const MonoObject* P, const MonoObject* Q)
{
	const auto VectorP = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), P);

	const auto VectorQ = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Q);

	if (VectorP != nullptr && VectorQ != nullptr)
	{
		return FVector::PointsAreSame(*VectorP, *VectorQ);
	}

	return false;
}

bool FVectorImplementation::Vector_PointsAreNearImplementation(const MonoObject* Point1, const MonoObject* Point2,
                                                               const float Dist)
{
	const auto VectorPoint1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Point1);

	const auto VectorPoint2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Point2);

	if (VectorPoint1 != nullptr && VectorPoint2 != nullptr)
	{
		return FVector::PointsAreNear(*VectorPoint1, *VectorPoint2, Dist);
	}

	return false;
}

float FVectorImplementation::Vector_PointPlaneDistImplementation(const MonoObject* Point, const MonoObject* PlaneBase,
                                                                 const MonoObject* PlaneNormal)
{
	const auto VectorPoint = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Point);

	const auto VectorPlaneBase = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), PlaneBase);

	const auto VectorPlaneNormal = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), PlaneNormal);

	if (VectorPoint != nullptr && VectorPlaneBase != nullptr && VectorPlaneNormal != nullptr)
	{
		return FVector::PointPlaneDist(*VectorPoint, *VectorPlaneBase, *VectorPlaneNormal);
	}

	return false;
}

void FVectorImplementation::Vector_PointPlaneProjectByPlaneImplementation(
	const MonoObject* Point, const MonoObject* Plane, MonoObject** OutValue)
{
	const auto VectorPoint = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Point);

	const auto PlanePlane = FCSharpEnvironment::TGetAddress<UScriptStruct, FPlane>()(
		FCSharpEnvironment::GetEnvironment(), Plane);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorPoint != nullptr && PlanePlane != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = FVector::PointPlaneProject(*VectorPoint, *PlanePlane);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_PointPlaneProjectByPointsImplementation(
	const MonoObject* Point, const MonoObject* A, const MonoObject* B, const MonoObject* C, MonoObject** OutValue)
{
	const auto VectorPoint = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Point);

	const auto VectorA = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), A);

	const auto VectorB = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), B);

	const auto VectorC = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), C);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorPoint != nullptr && VectorA != nullptr && VectorB != nullptr && VectorC != nullptr && OutVector !=
		nullptr)
	{
		const auto ResultVector = FVector::PointPlaneProject(*VectorPoint, *VectorA, *VectorB, *VectorC);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_PointPlaneProjectByPlaneBaseAndPlaneNormalImplementation(const MonoObject* Point,
	const MonoObject* PlaneBase, const MonoObject* PlaneNormal, MonoObject** OutValue)
{
	const auto VectorPoint = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Point);

	const auto VectorPlaneBase = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), PlaneBase);

	const auto VectorPlaneNormal = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), PlaneNormal);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorPoint != nullptr && VectorPlaneBase != nullptr && VectorPlaneNormal != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = FVector::PointPlaneProject(*VectorPoint, *VectorPlaneBase, *VectorPlaneNormal);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_VectorPlaneProjectImplementation(const MonoObject* V, const MonoObject* PlaneNormal,
                                                                    MonoObject** OutValue)
{
	const auto VectorV = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V);

	const auto VectorPlaneNormal = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), PlaneNormal);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (VectorV != nullptr && VectorPlaneNormal != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = FVector::VectorPlaneProject(*VectorV, *VectorPlaneNormal);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

float FVectorImplementation::Vector_DistImplementation(const MonoObject* V1, const MonoObject* V2)
{
	const auto VectorV1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V1);

	const auto VectorV2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V2);

	if (VectorV1 != nullptr && VectorV2 != nullptr)
	{
		return FVector::Dist(*VectorV1, *VectorV2);
	}

	return 0.f;
}

float FVectorImplementation::Vector_DistanceImplementation(const MonoObject* V1, const MonoObject* V2)
{
	const auto VectorV1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V1);

	const auto VectorV2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V2);

	if (VectorV1 != nullptr && VectorV2 != nullptr)
	{
		return FVector::Distance(*VectorV1, *VectorV2);
	}

	return 0.f;
}

float FVectorImplementation::Vector_DistXYImplementation(const MonoObject* V1, const MonoObject* V2)
{
	const auto VectorV1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V1);

	const auto VectorV2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V2);

	if (VectorV1 != nullptr && VectorV2 != nullptr)
	{
		return FVector::DistXY(*VectorV1, *VectorV2);
	}

	return 0.f;
}

float FVectorImplementation::Vector_Dist2DImplementation(const MonoObject* V1, const MonoObject* V2)
{
	const auto VectorV1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V1);

	const auto VectorV2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V2);

	if (VectorV1 != nullptr && VectorV2 != nullptr)
	{
		return FVector::Dist2D(*VectorV1, *VectorV2);
	}

	return 0.f;
}

float FVectorImplementation::Vector_DistSquaredImplementation(const MonoObject* V1, const MonoObject* V2)
{
	const auto VectorV1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V1);

	const auto VectorV2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V2);

	if (VectorV1 != nullptr && VectorV2 != nullptr)
	{
		return FVector::DistSquared(*VectorV1, *VectorV2);
	}

	return 0.f;
}

float FVectorImplementation::Vector_DistSquaredXYImplementation(const MonoObject* V1, const MonoObject* V2)
{
	const auto VectorV1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V1);

	const auto VectorV2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V2);

	if (VectorV1 != nullptr && VectorV2 != nullptr)
	{
		return FVector::DistSquaredXY(*VectorV1, *VectorV2);
	}

	return 0.f;
}

float FVectorImplementation::Vector_DistSquared2DImplementation(const MonoObject* V1, const MonoObject* V2)
{
	const auto VectorV1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V1);

	const auto VectorV2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), V2);

	if (VectorV1 != nullptr && VectorV2 != nullptr)
	{
		return FVector::DistSquared2D(*VectorV1, *VectorV2);
	}

	return 0.f;
}

float FVectorImplementation::Vector_BoxPushOutImplementation(const MonoObject* Normal, const MonoObject* Size)
{
	const auto VectorNormal = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal);

	const auto VectorSize = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Size);

	if (VectorNormal != nullptr && VectorSize != nullptr)
	{
		return FVector::BoxPushOut(*VectorNormal, *VectorSize);
	}

	return 0.f;
}

bool FVectorImplementation::Vector_ParallelImplementation(const MonoObject* Normal1, const MonoObject* Normal2,
                                                          const float ParallelCosineThreshold)
{
	const auto VectorNormal1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal1);

	const auto VectorNormal2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal2);

	if (VectorNormal1 != nullptr && VectorNormal2 != nullptr)
	{
		return FVector::Parallel(*VectorNormal1, *VectorNormal2, ParallelCosineThreshold);
	}

	return false;
}

bool FVectorImplementation::Vector_CoincidentImplementation(const MonoObject* Normal1, const MonoObject* Normal2,
                                                            const float ParallelCosineThreshold)
{
	const auto VectorNormal1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal1);

	const auto VectorNormal2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal2);

	if (VectorNormal1 != nullptr && VectorNormal2 != nullptr)
	{
		return FVector::Coincident(*VectorNormal1, *VectorNormal2, ParallelCosineThreshold);
	}

	return false;
}

bool FVectorImplementation::Vector_OrthogonalImplementation(const MonoObject* Normal1, const MonoObject* Normal2,
                                                            const float ParallelCosineThreshold)
{
	const auto VectorNormal1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal1);

	const auto VectorNormal2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal2);

	if (VectorNormal1 != nullptr && VectorNormal2 != nullptr)
	{
		return FVector::Orthogonal(*VectorNormal1, *VectorNormal2, ParallelCosineThreshold);
	}

	return false;
}

bool FVectorImplementation::Vector_CoplanarImplementation(const MonoObject* Base1, const MonoObject* Normal1,
                                                          const MonoObject* Base2, const MonoObject* Normal2,
                                                          const float ParallelCosineThreshold)
{
	const auto VectorBase1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Base1);

	const auto VectorNormal1 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal1);

	const auto VectorBase2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Base2);

	const auto VectorNormal2 = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Normal2);

	if (VectorBase1 != nullptr && VectorNormal1 != nullptr && VectorBase2 != nullptr && VectorNormal2 != nullptr)
	{
		return FVector::Coplanar(*VectorBase1, *VectorNormal1, *VectorNormal2, *VectorNormal2, ParallelCosineThreshold);
	}

	return false;
}

float FVectorImplementation::Vector_TripleImplementation(const MonoObject* X, const MonoObject* Y, const MonoObject* Z)
{
	const auto VectorX = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), X);

	const auto VectorY = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Y);

	const auto VectorZ = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), Z);

	if (VectorX != nullptr && VectorY != nullptr && VectorZ != nullptr)
	{
		return FVector::Triple(*VectorX, *VectorY, *VectorZ);
	}

	return 0.f;
}

void FVectorImplementation::Vector_RadiansToDegreesImplementation(const MonoObject* RadVector, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), RadVector);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = FVector::RadiansToDegrees(*Vector);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}

void FVectorImplementation::Vector_DegreesToRadiansImplementation(const MonoObject* DegVector, MonoObject** OutValue)
{
	const auto Vector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), DegVector);

	const auto FoundMonoClass = FCSharpEnvironment::GetEnvironment()->GetDomain()->Class_From_Name(
		FTypeBridge::GetClassNameSpace(CLASS_BASE_STRUCTURE(FVector)),
		CLASS_BASE_STRUCTURE_NAME(FVector));

	const auto NewMonoObject = FCSharpEnvironment::GetEnvironment()->GetDomain()->Object_New(FoundMonoClass);

	*OutValue = NewMonoObject;

	const auto OutVector = FCSharpEnvironment::TGetAddress<UScriptStruct, FVector>()(
		FCSharpEnvironment::GetEnvironment(), NewMonoObject);

	if (Vector != nullptr && OutVector != nullptr)
	{
		const auto ResultVector = FVector::DegreesToRadians(*Vector);

		OutVector->X = ResultVector.X;

		OutVector->Y = ResultVector.Y;

		OutVector->Z = ResultVector.Z;
	}
}
